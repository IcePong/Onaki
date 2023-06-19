#include <stdio.h>

int main(void){

    int price = 10000000000000;

    float rate = 0.20;

    int discount = price * rate;

    printf("Discount is %d THB", discount);

    return 0;
}