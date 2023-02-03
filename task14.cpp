#include <iostream>
using namespace std;
main()
{
int size;
    cout<<"enter number of resistor";
    cin>>size;
    int sum=0;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter resistor value";
        cin>>arr[idx];
    }
    for(int idx=0; idx<size; idx++)
    {
        sum=sum+arr[idx];
    }
     cout<<"total resitance in series is:  "<<sum<<" ohms"<<endl;
}