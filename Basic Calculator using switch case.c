#include<stdio.h>
#include<math.h>
int main(){
    float num1, num2;
    char choice;
    printf("Enter <Number1> <'+','-','*','/' or 'r for reminder'> <Number2>\n");
    scanf("%f %c %f", &num1, &choice, &num2);
    
    switch(choice){
        case '+':{
            float sum = num1+num2;
            printf("Sum = %f",sum);
            break;
        }
        case '-':{
            float sub = num1-num2;
            printf("Subtract = %f",sub);
            break;
        }
        case '*':{
            float mul = num1*num2;
            printf("Multiply = %f",mul);
            break;
        }
        case '/':{
            if(num2==0)
                printf("Wrong input. Number2 can not be '0'");
            else{
                float divide = num1/num2;
                printf("Divide = %f",divide);
            }
            break;
        }
        case 'r':{
            if(num2==0)
                printf("Wrong input. Number2 can not be '0'");
            else{
                float remainder = fmod(num1,num2);
                printf("Remainder = %f",remainder);
            }
            break;
        }
        default:
            printf("Invalid operator! Just use +, -, *, / or r");
    }
    return 0;
}