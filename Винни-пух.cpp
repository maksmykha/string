#include <bits/stdc++.h>

using namespace std;
bool check_date(string date)
{
    int day, mon, year;
    day=(date[9]-'0')*10+(date[8]-'0');
    mon=(date[7]-'0')*10+(date[6]-'0');
    year=(date[4]-'0')*1000+(date[3]-'0')*100+(date[1]-'0')*10+(date[0]-'0');
    if (mon>12 || day>31) return false;
    if (((mon==4)||(mon==6)||(mon==9)||(mon==11))&&(day>30)) return false;
    if ((mon==2)&&(day>28) && (year%4!=0 ||(year%100==0 && year%400!=0))) return false;
    return true;
}
int main()
{
    int N;
    string date;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>date;
        if(check_date(date))
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}
