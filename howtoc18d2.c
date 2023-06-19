#include <stdio.h>

void Mutipierfive(int num){
    printf("%d",num*5);
}

int main (void){
    int num;
    printf("Please put number:");
    scanf("%d",&num);
    Mutipierfive(num);
}
