#include <stdio.h>

int main(void){

    int a = 2 ;
    int b = 3 ;
    int c = 4 ;
    int d = 5 ;
    int e = 6 ;
    int f = 7 ;
    int x ;
    int y ;
    int z ;
    int i ;
    int j ;

    x = a + e / f * c ;
    printf("x = %d\n",x);

    y = (f-e)*(c/a) ;
    printf("y = %d\n",y);

    z = a * d / a + e / b ;
    printf("z = %d\n",z);

    i = a*(d/(a+e))/b ;
    printf("i = %d\n",i);

    j = a*b-c+e*d ;
    printf("j = %d\n",j);

    return 0;
}