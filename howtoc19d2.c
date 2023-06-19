#include <stdio.h>

void Mutipierfive(int sum){
    printf("%d",sum*5);

}

int main (void){
    int sum;
    printf("Please put number:");
    scanf("%d",&sum);
    Mutipierfive(sum);

    return 0;
}
