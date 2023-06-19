#include <stdio.h>

int main(void){

    int num1 = 10, num2 = 3, result;

    result = num1 + num2;
    printf("Addition result: %d\n",result);

    result = num1 - num2;
    printf("Subtraction result: %d\n", result);

    result = num1 * num2;
    printf("Multiplication result: %d\n", result);

    result = num1 % num2;
    printf("Modulus result: %d\n", result);

    return 0;
}