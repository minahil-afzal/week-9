#include <iostream>
using namespace std;
main()
{
    int arr1[2];
    for(int idx=0;idx<2;idx++)
    {
        cout<<"enter number: ";
        cin>>arr1[idx];
    }

    int size1;
    cout<<"enter size of first array";
    cin>>size1;

int arr2[size1];
    for(int idx=0;idx<size1;idx++)
    {
        cout<<"enter number: ";
        cin>>arr2[idx];
    }

    for(int idx=0; idx<size1;idx++)
    {
        if (idx == 0)
        {
            cout<<arr1[idx]<<" ";
        }
        cout<< arr2[idx]<<" ";
        if(idx == size1 - 1)
        {
            cout<< arr1[1]<<" ";
        }
    }
    
}
