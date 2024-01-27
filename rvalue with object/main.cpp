#include <iostream>
#include <vector>
struct A{
    int* ptr;
    A(){
        this->ptr= new int;
        std:: cout << "Constructor is called" << std::endl; 
    }

    A(const A& a){
        this->ptr= new int;
        std:: cout << "Copy constructor is called" << std::endl; 
    }
    A(A && a){
        this->ptr=a.ptr;
        std:: cout << "Move constructor is called" << std::endl; 
    }
    ~A(){
        delete ptr;
        std:: cout << "Destructor is called" << std::endl; 
    }
};

int main(){

std::vector<A> a;
a.push_back(A());
    return 0;
}