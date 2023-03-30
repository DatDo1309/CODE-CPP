#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money;
    cin >> money;
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    long long dem = 0;

    for (int i=0; i<10; i++)
    {   
        dem += money/a[i];
        money %= a[i];
    }

    cout << dem;
}