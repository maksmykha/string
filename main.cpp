#include<bits/stdc++.h>
using namespace std;
int func(char ch);
int main()
{
    int arabien_num=0;
    string rome_num;
    cin>>rome_num;
    arabien_num+=func(rome_num[rome_num.size()-1]);
    for (int i=rome_num.size()-2; i>=0; i--)
    {
        if (func(rome_num[i])<func(rome_num[i+1]))
            arabien_num-=func(rome_num[i]);
        else arabien_num+=func(rome_num[i]);
    }
    cout<<arabien_num;
    return 0;
}
int func(char ch)
{
    switch (ch)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
}
