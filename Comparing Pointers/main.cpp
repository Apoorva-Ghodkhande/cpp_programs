#include <iostream>
#include <list>
using namespace std;


int main(){
int numbers[]={10, 20, 30};
//cout<< size(numbers);
int* ptr=numbers;
for(int i=size(numbers)-1;i>=0;i--)
{
    cout<<ptr[i];
}

}