#include<iostream>

int square(int n){
    return n*n;
}

int main(){
    int number;
    std::cout << "Please enter the number you want to get square of:" << std::endl;
    std::cin >> number;
    std::cout << square(number);
    return 0;
}