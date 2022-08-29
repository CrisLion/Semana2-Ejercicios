#include<iostream>

int fibonacci_Conejos(int n){
    if (n <= 0){
        return 2;
    }
    else return fibonacci_Conejos(n-1) + fibonacci_Conejos(n-2);
}


int main(){

    std::cout<<fibonacci_Conejos(12)<<std::endl;

    return 0;
}