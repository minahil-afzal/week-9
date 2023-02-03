#include <iostream>
using namespace std;
main()
{
    string word;
    char vowels[6]={'a','e','o','i','u','\0'};
    cout<<"enter a word";
    getline(cin,word);
    int count=0;
    int idx=0;
     while(word[idx]!= '\0')
    {
   if(word[idx] =='a' || word[idx] =='e' || word[idx] =='i' || word[idx] =='o' || word[idx] =='u' )
    {
       count++;
    }
       ++idx;
    }
        cout<<count;

}