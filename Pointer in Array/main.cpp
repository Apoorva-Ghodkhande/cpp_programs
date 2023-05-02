#include <iostream>
#include <array>

int main(){

int a[5]={1,2,3,4,5};

for(int i=0;i<=4;i++)
{
    std::cout<<a[i]<<std::endl;
}

for(int i=0;i<=4;i++)
{
    std::cout<<*(a+i)<<std::endl;
    
}

    return 0;
}