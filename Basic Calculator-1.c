#include<stdio.h>
int main(){
    double num1,num2;
    char operator;
    printf("<Enter number1>   <then enter operator ('+', '-', '*' or '/')>   <then number2>\n");
    scanf("%lf%c%lf",&num1,&operator,&num2);

    if (operator=='+')
        printf("Addition: %.6lf",num1+num2);
    else if (operator=='-')
        printf("Subtraction: %.6lf",num1-num2);
    else if (operator=='*')
        printf("Multiplication: %.6lf",num1*num2);
    else if(operator=='/'){
        if(num2==0)
            printf("Division: As divisor, zero is not valid!");
        else
            printf("Division: %.6lf",num1/num2);}
    else
        printf("Invalid operator! Use (+, -, * or /)");
    return 0;
}

