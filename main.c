#include <stdio.h>
#include <stdlib.h>

float DoAddition(float num1, float num2);
float DoSubstraction(float num1, float num2);
float DoMultiplication(float num1, float num2);
float DoDivision(float num1, float num2);

int main()
{
    float number1, number2, result;
    int decision;
    for(;;)
    {
    system("cls");
    printf("Choose an operation you wish to use(0 to end)\n");

    printf("- 1 - Addition\n");
    printf("- 2 - Substraction\n");
    printf("- 3 - Multiplication\n");
    printf("- 4 - Division\n");
    scanf("%d", &decision);
    if(decision == 0)
    {
        break;
    }
    system("cls");

    printf("Enter 1st number: ");
    scanf("%f", &number1);
    printf("Enter 2nd number: ");
    scanf("%f", &number2);

    switch(decision)
    {
    case 1:
        result = DoAddition(number1, number2);
        break;
    case 2:
        result = DoSubstraction(number1, number2);
        break;
    case 3:
        result = DoMultiplication(number1, number2);
        break;
    case 4:
        result = DoDivision(number1, number2);
        break;
    }

    printf("Result is: %f\n", result);
    system("pause");
    }
    return 0;
}


float DoAddition(float num1, float num2)
{
    return num1+num2;
}
float DoSubstraction(float num1, float num2)
{
    return num1-num2;
}
float DoMultiplication(float num1, float num2)
{
    return num1*num2;
}
float DoDivision(float num1, float num2)
{
    return num1/num2;
}

