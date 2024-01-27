#include <iostream>
#include <array>

void swap(int* first, int* second){
int temp=*first;
*first=*second;
*second=temp;
}

int main(){

int a=5,b=7;
swap(&a,&b);
std::cout<< "a=> "<< a;
std::cout<< "b=> "<< b;

}