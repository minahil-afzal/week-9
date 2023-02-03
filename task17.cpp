#include <iostream>
using namespace std;
main()
{
    string word;
    char vowels[6]={'a','e','o','i','u','\0'};
    cout<<"enter a word";
    getline(cin,word);

    for (int idx=0; idx < word.length() ; idx++ )
    {
        if(word[idx]== vowels[0] || word[idx]== vowels[1] || word[idx]== vowels[2] || word[idx]== vowels[3] ||  word[idx]== vowels[4] || word[idx]== vowels[5]  )
        {
            cout<<"";
        }
        else 
        {
            cout<<word[idx];
        }
    }
}