// #include <stdio.h>
// int main()
// {
//     double num1, num2, temp;

//     // Storing first number entered by user in num1
//     printf("Enter First Number: ");
//     scanf("%lf", &num1);

//     //Storing second number entered by user in num2
//     printf("Enter Second Number: ");
//     scanf("%lf",&num2);

//     printf("Before swapping:\n");
//     //%.2lf is to have two digits after the decimal point
//     printf("num1 is: %.2lf and num2 is: %.2lf\n", num1, num2);
//     // Assigning the value of num1 to the temp variable
//     temp = num1;

//     // Assigning the value of second number num2 to num1
//     num1 = num2;

//     /* Assigning the value of temp variable(which is the
//      * original value of num1) to the num2
//      */
//     num2 = temp;

//     printf("After swapping:\n");
//     printf("num1 is: %.2lf and num2 is: %.2lf", num1, num2);

//     return 0;
// }