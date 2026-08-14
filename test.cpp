#include <bits/stdc++.h>
using namespace std;
int n;
string curString;

void genString(int pos)
{
    if (pos > n)
    {
        cout << curString << "\n";
        return;
    }
    for (char i = '0'; i <= '1'; i ++)
    {
        curString.push_back(i);    //thêm ký t? m?i vào dãy
        genString(pos + 1);
        curString.pop_back();      //b? ký t? này di
    }
}

int main()
{
    cin >> n;
    curString = "";
    genString(1);

    return 0;
}
