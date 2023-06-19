#include <stdio.h>
#include <string.h>
#define N 1000



int main (void){

    int arr[N];
    int rearr[N];
    int n;

    printf("Size of the array:");
    scanf("%d",&n);

    printf("Enter an array:");
    for (int i = 0; i < n; i++){
        scanf("%c", &arr[i]);
    }

    printf("Reversed array:");
    for (int i = n-1; i>=0; i--){
        printf("%c", arr[i]);
        rearr[n-i] = arr[i];

    }

    for (int i = 0 ; i < n; i++){
        printf("%c",rearr[i]);
    }

    for (int i = 0 ; i < n; i++){

        if (arr[i] != rearr[i]){

            printf("Not Palindrome\n");
            printf("%c\n", rearr[i]);
            printf("%c\n", arr[i]);
            return 0;
        }
           
    }

    printf("Yes This is Palinedrome!!!");

    return 0;
}