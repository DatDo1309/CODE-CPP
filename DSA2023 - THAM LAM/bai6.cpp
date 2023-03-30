#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long a[n], b[n];
    for (int i=0; i<n; i++) 
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) 
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    long long res = 0;
    for (int i=0; i<n; i++) 
    {
        res += a[i] * b[i];
    }
    cout << res;
    return 0;
}
