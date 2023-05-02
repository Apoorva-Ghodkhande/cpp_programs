#include <iostream>
#include <array>
int main(){

int arr[4]={1,2,3,4};

std::array<int,4> a={1,2,3,400};

std::cout<<a.at(0)<<std::endl;
std::cout<<"back"<<a.back()<<std::endl;
std::cout<<"front"<<a.front()<<std::endl;
    return 0;
}