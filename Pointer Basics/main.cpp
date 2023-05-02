#include <iostream>
#include <array>
int main(){

int a=5;
int* b=&a;
std::cout<<"Pointer after saving address of a: "<< *b<<std::endl;
*b=8;
std::cout<<"Pointer after changing value: "<< *b<<std::endl;
std::cout<<"Value of a:  "<< a<<std::endl;
    return 0;
}