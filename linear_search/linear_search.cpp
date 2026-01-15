#include<iostream>
using namespace std;

/*
Linear search for a value in an array
*/

int main()
{

    //Array Input
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //Input search value
    int search;
    cout<<"Enter search value: ";
    cin>>search;

    int not_found = 1;

    for(int i=0; i<n; i++){
        if(search == a[i])
        {
            not_found = 0;
            cout<< search << " is found at index " <<i << endl;
            break;
        }
    }
    
    if(not_found)
    {
        cout<< "Not Found!" <<endl;
    }
    return 0;
}