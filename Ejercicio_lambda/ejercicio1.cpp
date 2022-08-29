#include <iostream>

int main(){

    auto func1 = [] (int a,int b) { return a*b;};
    std::cout<<func1(12,15)<<std::endl;

    return 0; 
}