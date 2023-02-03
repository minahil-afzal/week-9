#include <iostream>
using namespace std;
main()
{
    bool found=false;
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
    for(int idx=0; idx<size; idx++)
    {
        if (number == arr[idx] )
        {
            cout<<"found the number";
            found =true;
            break;
        }
        if(found == false)
        {
            cout<<"not found the number";
        }
        else
        {
            cout<<"already exist";
        }
    }
   
    

}