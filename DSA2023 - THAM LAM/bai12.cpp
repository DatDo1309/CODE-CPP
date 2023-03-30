#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n!=0)
    {
        if (n%4==0)
        {
            cout << 4;
            n-=4;
        }
        else
        {
            cout << 7;
            n-=7;
        }
    }
}