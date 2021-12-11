#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// function declarations
int bitwise_and(num1, num2);
int bitwise_or(num1, num2);
int bitwise_xor(num1, num2);
int bitwise_lshift(num1, num2);
int bitwise_rshift(num1, num2);

int main()
{
    // Muhamad Ahmadin Assignment 3 | CAP172
    // declare a local variable op;
    int op;

    // displays the multiple bitwise operations of the C Calculator
    printf (" Select an operation to perform the bitwise calculation in C Calculator: ");
    printf (" \n 1 Bitwise AND  \n 2 Bitwise OR \n 3 Bitwise XOR \n 4 Bitwise Left Shift \n 5 Bitwise Right Shift \n \n Choose the operation (Insert number): ");

    scanf ("%d", &op);

    int num1, num2, result; // declare a local variable
    printf (" Input First Number: ");
    scanf ("%d", &num1);

    printf (" Input Second Number: ");
    scanf ("%d", &num2);



    switch (op)
    {
        case 1:
            result = bitwise_and(num1,num2);
            printf (" Bitwise AND Result = %d", result);
            break; // break the function

        case 2:
            result = bitwise_or(num1,num2);
            printf (" Bitwise OR Result = %d", result);
            break; // break the function

        case 3:
            result = bitwise_xor(num1,num2);
            printf (" Bitwise XOR Result = %d", result);
            break; // break the function

        case 4:
            result = bitwise_lshift(num1,num2);
            printf (" Bitwise Left Shift Result = %d", result);
            break; // break the function

        case 5:
            result = bitwise_rshift(num1,num2);
            printf (" Bitwise Right Shift Result = %d", result);
            break; // break the function

        default:
            printf(" Number is not in the menu! ");
            break;
    }
    return 0;
}



// function definition
int bitwise_and(int num1, int num2)
{
    int res = num1 & num2;
    return res;
}

int bitwise_or(int num1, int num2)
{
    int res = num1 | num2;
    return res;
}

int bitwise_xor(int num1, int num2)
{
    int res = num1 ^ num2;
    return res;
}

int bitwise_lshift(int num1, int num2)
{
    int res = num1 << num2;
    return res;
}

int bitwise_rshift(int num1, int num2)
{
    int res = num1 >> num2;
    return res;
}
