#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter element";
        cin>>arr[idx];
    }
   for(int idx=size-1; idx>=0; idx--)
    {
        cout<<arr[idx]<<" ";
    }

}