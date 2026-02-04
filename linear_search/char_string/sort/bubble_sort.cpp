#include<iostream>
using namespace std;
int main()
{
    
    int arr[]={4,5,2,9,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=1;j<len;j++)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
    cout<< arr[i] << " ";
    }
}