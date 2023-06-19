#include <stdio.h>

int main(void){

    int x = 4;
    float y = -1.2;
    char z = 'A';
    int result;

    result = (x<y)||(z>=y);
    printf("result = %d\n",result);

    result = (y*100)&&(x<=z);
    printf("result = %d\n",result);

    result = (z>x)||(x<y)&&(y<=x);
    printf("result = %d\n",result);    

    result = (x*y)&&(z>y)||(y<x);
    printf("result = %d\n",result);
    
    result = (y == z)||(x>y);
    printf("result = %d\n",result);
    
    return 0;
}