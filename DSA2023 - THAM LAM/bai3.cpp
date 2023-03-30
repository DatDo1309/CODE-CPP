#include <bits/stdc++.h>
using namespace std;
long long du = 10e9+7;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    for (long long i=0; i<n; i++)
    {
        res += a[i] * i;
    }
    cout << res % du;
}