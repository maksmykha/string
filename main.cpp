#include <bits/stdc++.h>
using namespace std;

void inp_num(string num[]);
bool pass_num(string,int num_in_pass[], string num[]);


int main()
{
    string s;
    cin>>s;
    string num[10];
    int num_in_pass[8];
    inp_num(num);
    if(pass_num(s,num_in_pass, num))
        for(int i=0; i<8; ++i)
            cout<<num_in_pass[i];
    else cout<<-1;
    return 0;
}

void inp_num(string num[])
{
    for(int i=0; i<10; ++i)
    {
        cin>>num[i];
    }
}

bool pass_num(string s, int num_in_pass[], string num[])
{
    bool etalon=true;
    for(int j=0; j<8; ++j)
    {
        int dig=-1;
        for(int i=0; i<10; ++i)
        {
            if(num[i]==string(s.begin()+j*10, s.begin()+j*10+10))
                dig=i;
        }
        if(dig==-1) etalon=false;
        else num_in_pass[j]=dig;
    }
    return etalon;
}
