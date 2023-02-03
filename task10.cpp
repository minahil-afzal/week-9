#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter a word";
    getline(cin,word);
    int idx=0;
    while(word[idx]!= '\0')
    {
       idx++;
    }
    for(int n=idx; n>=0; n--)
    {
        cout<<word[n]<<" ";
    }

}