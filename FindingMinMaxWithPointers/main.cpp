#include <iostream>

void minAndMax(int a[],int size, int *min,int*max)
{
for(int i=1;i<size;i++)
{
    if(a[i]<*min){
        *min=a[i];
    }
    if(a[i]>*max)
    {
        *max=a[i];
    }
}
}

int main(){

int arr[5]={1,2,3,4,56};
int min=arr[0];
int max=arr[0];
minAndMax(arr,5,&min,&max);
std::cout<<"min is "<< min<< " and max is "<< max;
    return 0;
}