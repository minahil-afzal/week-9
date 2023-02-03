#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter a word";
    getline(cin,word);
    char letter;
    cout<<"letter enter";
    cin>>letter;
    int count=0;
    while(word[count]!= '\0')
    {
        count++;
    }
if (word[count-1] == letter)
{
    cout<<"same as last"<<letter;
}
else
{
    cout<<"not same";
}
}