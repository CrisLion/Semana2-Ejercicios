#include <iostream>

int suma(int a, int b){
    return a + b;
}

int multi(int a, int b){
    return a * b;
}

int res(int a, int b){
    return a - b;
}

void menu(int (**ptr)(int, int)){
    int opc, a, b;
    std::cout<<"1.Sumar\n2.Multiplicar\n3.Restar\n";
    std::cout<<"Ingrese una opcion: "; std::cin>>opc;
    std::cout<<"Ingrese dos valores (ejem. 34 13): "; std::cin>>a>>b;
    std::cout<<"El resultado es "<<ptr[opc-1](a,b)<<std::endl;
}

int main(){

    int (*ptr_Func[])(int, int) = {suma, multi, res};
    std::cout<< ptr_Func[0](12,1)<<" "<<ptr_Func[1](3,4)<<" "<<ptr_Func[2](67,89)<< std::endl;

    menu(ptr_Func);

    return 0;
}