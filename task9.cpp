#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter a word";
    getline(cin,word);
    
    int count=0;
    while(word[count]!= '\0')
    {
        count++;
    }
   if(count%2 == 0)
   {
    cout<<"it is even";
   }
   else 
   {
    cout<<"it is odd";
   }

}