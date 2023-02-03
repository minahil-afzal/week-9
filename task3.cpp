#include <iostream>
using namespace std;
main()
{
int size;
    cout<<"enter size of array";
    cin>>size;
    int sum=0;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter element";
        cin>>arr[idx];
    }
    for(int idx=0; idx<size; idx++)
    {
        sum=sum+arr[idx];
    }
     cout<<"sum is "<<sum<<endl;
    int average=sum/size;
    cout<<"average is: "<<average;


}