#include<iostream>

void function(int a, int b){
    int result = a+b;
    std::cout << "The line above will be automatically ignored by the compiler :|" << std::endl;
}

int main(){
    int a, b;
    std::cin >> a >> b;
    function(4, 5);
    return 0;
}