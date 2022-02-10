
#include <bits/stdc++.h>
using namespace std;

bool correct_brackets(string);

int main()
{
    string s;
    while(cin>>s)
    {
        if(correct_brackets(s)) cout<<"OK\n";
        else cout<<"WRONG\n";
    }
    return 0;
}


bool correct_brackets(string s)
{
    int i;
    while(s.size()!=0)
    {
        bool incorrect=true;
        while((i=s.find("~@"))!=-1 || (i=s.find("#$"))!=-1 || (i=s.find("%&"))!=-1)
        {
            s.erase(i, 2);
            incorrect=false;
        }
        if(incorrect) return false;
    }
    return true;
}
