#include <iostream>
using namespace std;
main()
{
    float amount;
    cout<<"enter due price: ";
    cin>>amount;
    float arr[4];
    float sum=0.0;
    for(int idx=0; idx < 4; idx++)
    {
        float price=0.0;
        if(idx == 0)
        {
            cout<<"enter quarters";
            cin>>arr[0];
            price=0.25*arr[0];
        }
         if(idx == 1)
        {
            cout<<"enter dimes";
            cin>>arr[1];
            price=0.10*arr[1];
        }
         if(idx == 2)
        {
            cout<<"enter nickels";
            cin>>arr[2];
            price=0.05*arr[2];
        }
         if(idx == 3)
        {
            cout<<"enter pennies";
            cin>>arr[3];
            price=0.01*arr[3];
        }
        sum=sum+price;
    }
    if(sum>=amount)
    {
        cout<<"true!";
    }
    else
    {
        cout<<"false";
    }

}