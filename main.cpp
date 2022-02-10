#include<bits/stdc++.h>
using namespace std;
string func(int num, string, string, string);
int main()
{
    int arabien_num;
    string rome_num;
    cin >> arabien_num;


    rome_num += func(arabien_num / 1000, "", "", "M");
    arabien_num %= 1000;
    rome_num += func(arabien_num / 100, "M", "D", "C");
    arabien_num %= 100;
    rome_num += func(arabien_num / 10,  "C", "L", "X");
    arabien_num %= 10;
    rome_num += func(arabien_num ,   "X", "V", "I");
    cout << rome_num;
    return 0;
}
string func(int num, string pi, string z, string da)
{
    switch(num)
    {
        case 9:
            return da + pi;
        case 8:
            return z + da + da + da;
        case 7:
            return z + da + da;
        case 6:
            return z + da;
        case 5:
            return z;
        case 4:
            return da + z;
        case 3:
            return da + da + da;
        case 2:
            return da + da;
        case 1:
            return da;
        case 0:
            return "";
    }
}
