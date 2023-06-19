#include <stdio.h>

int main (void){

    int mark[13],i,number;
    

    printf("Enter number of Tables:");
    scanf("%d", &number);

    for(i = 0; i < 12; ++i){
        mark[i] = number * (i+1);
    }
    for(i = 0; i < 12; ++i){
        printf("%d x %d = %d\n",number,i+1,mark[i]);
    }


    return 0;
}