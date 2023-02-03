#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter word";
    getline(cin,word);
    char letter;
    for(int x=0; x<word.length();x++)
    {
        letter=(word[x]);
        if(letter == 'a')
        {
            word[x]='b';
        }
        else if(letter == 'b')
        {
            word[x]='c';
        }
         else if(letter == 'c')
        {
            word[x]='d';
        }
         else if(letter == 'd')
        {
            word[x]='e';
        }
         else if(letter == 'e')
        {
            word[x]='f';
        }
         else if(letter == 'f')
        {
            word[x]='g';
        }
         else if(letter == 'g')
        {
            word[x]='h';
        }
         else if(letter == 'h')
        {
            word[x]='i';
        }
         else if(letter == 'i')
        {
            word[x]='j';
        }
         else if(letter == 'j')
        {
            word[x]='k';
        }
         else if(letter == 'k')
        {
            word[x]='l';
        }
         else if(letter == 'l')
        {
            word[x]='m';
        }
         else if(letter == 'm')
        {
            word[x]='n';
        }
         else if(letter == 'n')
        {
            word[x]='o';
        }
         else if(letter == 'o')
        {
            word[x]='p';
        }
         else if(letter == 'p')
        {
            word[x]='q';
        }
         else if(letter == 'q')
        {
            word[x]='r';
        }
         else if(letter == 'r')
        {
            word[x]='s';
        }
         else if(letter == 's')
        {
            word[x]='t';
        }
         else if(letter == 't')
        {
            word[x]='u';
        }
         else if(letter == 'u')
        {
            word[x]='v';
        }
         else if(letter == 'v')
        {
            word[x]='w';
        }
         else if(letter == 'w')
        {
            word[x]='x';
        }
         else if(letter == 'x')
        {
            word[x]='y';
        }
         else if(letter == 'y')
        {
            word[x]='z';
        }
         else if(letter == 'z')
        {
            word[x]='a';
        }
        cout<<word[x];
    }
}