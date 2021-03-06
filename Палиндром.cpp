#include <bits/stdc++.h>

using namespace std;

bool check_palindrom(string);

int main()
{
    freopen("palindrom.in","r",stdin);
    freopen("palindrom.out","w",stdout);
    string text;
    int cnt=0,n=0;
    cin>>n;
    if (n==0)
        cout<<"NULL";
    else
    {
       while (cin>>text)
       {
          if (check_palindrom(text) && text.size()==n)
          {
              cout<<text<<'\n';
              ++cnt;
          }
       }
       if (cnt == 0)
          cout<<"-1";
    }
    return 0;
}

bool check_palindrom(string text)
{
   int j=text.size()/2,i;
   for (int i=0; i<j; ++i)
   {
       if (tolower(text[i])!=tolower(text[text.size()-1-i]))
           return false;
   }
   return true;
}
