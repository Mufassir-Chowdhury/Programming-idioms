#include<stdio.h>

int square(int n){
    return n*n;
}

int main(){
    int number;
    printf("Please enter the number you want to get squared: ");
    scanf("%d", &number);
    printf("%d", square(number));
    return 0;
}