#include <iostream>
#include <vector>
int main(){

std::vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
for(int i:v)
{
    std::cout<< i<<" ";
}
    return 0;
}