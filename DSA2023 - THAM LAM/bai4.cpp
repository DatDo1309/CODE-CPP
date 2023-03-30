#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    long long tong = 0;
    int dem=0;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    sort(a, a+n);
    long long res = 0;
    if (k<n-k)
    {
        for (int i=0; i<k; i++)
        {
            res += a[i];
        }
    }
    else
    {
        for (int i=0; i<n-k; i++)
        {
            res += a[i];
        }
    }
    cout << tong - res - res;
}