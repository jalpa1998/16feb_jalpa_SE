//write a program to make simple clculator(to mack addition,subtraction,multiplication,divison)

#include <stdio.h>
 main()
{
    int number1, number2, add, sub, mul;
    float div;

    printf("Enter Number 1");
    scanf("%d", &number1);
    printf("Enter Number 2");
    scanf("%d", &number2);
    add= number1 + number2 ;
    sub= number1 - number2;
    mul = number1 * number2;
    div = number1 /number2;   
    printf("Addition = %d\n",add);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %.2f\n",div);

}
