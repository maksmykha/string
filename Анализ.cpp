#include <bits/stdc++.h>
using namespace std;

void analyze_string(string s, int mas[]);
bool has_elements(int mas[]);

int mas[26]={};
int main()
{
    ifstream in("analiz.in");
    ofstream out("analiz.out");
    string s;
    while(in>>s)
    {
        analyze_string(s, mas);
    }
    if(has_elements(mas))
    {
        for(int i='A'-'A'; i<='Z'-'A'; ++i)
        {
            out<<(char)('A'+i)<<' '<<mas[i]<<'\n';
        }
    }
    else out<<-1;
    in.close();
    out.close();
    return 0;
}
void analyze_string(string s, int mas_results[])
{
    for(int i=0; i<='Z'-'A'; ++i)
    {
        mas_results[i]+=count(s.begin(), s.end(), i+'A');
        mas_results[i]+=count(s.begin(), s.end(), i+'a');
    }
}

bool has_elements(int mas[])
{
    for(int i=0; i<26; ++i)
        if (mas[i]!=0) return 1;
    return 0;
}
