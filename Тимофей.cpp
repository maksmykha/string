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
string func(int num, string third, string second, string first)
{
    switch(num)
    {
        case 9:
            return first + third;
        case 8:
            return second + first + first + first;
        case 7:
            return second + first + first;
        case 6:
            return second + first;
        case 5:
            return second;
        case 4:
            return first + second;
        case 3:
            return first + first + first;
        case 2:
            return first + first;
        case 1:
            return first;
        case 0:
            return "";
    }
}
