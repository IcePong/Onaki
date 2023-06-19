#include <stdio.h>
#include <math.h>
int main(void){

    int r ;
    float Circle ;
    float area = 3.14 ;

    scanf("%d", &r);
    printf("This is r = %d\n",r);

    Circle = area * r * r ;
    printf("This is area of Circle = %f\n",Circle);

    return 0;
}