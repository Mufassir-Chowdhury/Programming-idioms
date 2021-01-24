#include<stdio.h>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main(){
    unsigned long long int a, b;
    scanf("%llu %llu", &a, &b);
    printf("The GCD of %llu and %llu is: %llu", a, b, gcd(a, b));
    return 0;
}