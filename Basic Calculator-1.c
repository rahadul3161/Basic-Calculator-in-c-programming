#include<stdio.h>
#include<math.h>
int main(){
    double num1,num2;
    char operator;
    printf("<Enter number1>   <then enter ('+','-','*','/' or 'r for reminder')>   <then number2>\n");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    if (operator=='+')
        printf("Addition: %lf",num1+num2);
    else if (operator=='-')
        printf("Subtraction: %lf",num1-num2);
    else if (operator=='*')
        printf("Multiplication: %lf",num1*num2);
    else if(operator=='/'){
        if(num2==0)
            printf("Division: As divisor, zero is not valid!");
        else
            printf("Division: %lf",num1/num2);
    }
    else if(operator=='r'){
        if(num2==0)
            printf("Remainder: As divisor, zero is not valid!");
        else
            printf("Remainder: %lf",fmod(num1,num2));
    }
    else
        printf("Invalid operator! Use (+, -, *, / or r)");
    return 0;
}

