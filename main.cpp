#include <bits/stdc++.h>

using namespace std;

bool palindrom(string &);

int main()
{
    bool check=false;
    string text;
    while (cin>>text)
    {
        if (palindrom(text))
        {
            check=true;
            cout<<text<<'\n';
        }
    }
    if (check==false) cout<<"The notepad is clean.";
    return 0;
}


bool palindrom(string &text)
{
    int i;
    for ( i=0; i<text.size()/2;++i)
    {
        if (text[i]!=text[text.size()-i-1])
            return false;
        if (!isdigit(text[i]) || !isdigit(text[text.size()-i-1]))
            return false;
    }
    return true;
}
