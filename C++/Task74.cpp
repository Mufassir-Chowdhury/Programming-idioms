#include<iostream>
using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main(){
    unsigned long long int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " " << b << " is: " << gcd(a, b);
    return 0;
}