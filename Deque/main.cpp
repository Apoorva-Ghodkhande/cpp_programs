#include <iostream>
#include <deque>
int main(){

std::deque<int> d;
d.push_back(2);
d.push_front(3);
for(int i:d)
{
    std::cout<< i<<" ";
}
    return 0;
}