#include <iostream>
#include <array>

void print(void* ptr,char ch)
{
switch (ch)
{
case 'i':
 std::cout<<*((int*)ptr)<<std::endl;
    break;
case 'c':
 std::cout<<*((char*)ptr)<<std::endl;
    break;
default:
    break;
}

}

int main(){

int a=5;
char c='w';
print(&a,'i');
print(&c,'c');
    return 0;
}