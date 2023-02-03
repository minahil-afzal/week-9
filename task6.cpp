#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int number;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter element";
        cin>>arr[idx];
    }
    cout<<"enter another number";
    cin>>number;
     for(int idx=0; idx<number; idx++)
    {
        cout<<arr[idx]*number<<" ";
    }
   

}