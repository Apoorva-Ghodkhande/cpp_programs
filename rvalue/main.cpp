#include <iostream>
#include <array>
int main(){
int i=10;
//** We can assign a variable but not the temperory value to reference variable
//**nIf you want to assign any temporary value to the referance variable then use const keyword
int& j= i;
const int& k=20;

j=12;
std::cout <<"If we print j: "<< j << std::endl;
std::cout <<"If we print i: "<< i << std::endl;
std::cout <<"If we print &j: "<< &j << std::endl;
std::cout <<"If we print &i: "<< &i << std::endl;
    return 0;
}