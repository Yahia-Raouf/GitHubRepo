#include <iostream>

int summation(int a, int b){
    return a+b;
}

int main(){
    int sum = summation(2,3);
    std::cout << sum << std::endl;
    return 0;
}