#include<iostream>

int factorial(const int& n){
    if (n <= 1) return 1;
    else return n * factorial(n-1);
}

int main(){

    std::cout<<factorial(3)<<std::endl;

    return 0;
}