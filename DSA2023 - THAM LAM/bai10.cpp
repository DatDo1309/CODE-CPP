#include <bits/stdc++.h>
using namespace std;
long long du = 1e9+7;
int main()
{
    int n;
    cin >> n;

    priority_queue<long long, vector<long long> > pq;
    for (int i=0; i<n; i++)
    {
        int tg;
        cin >> tg;
        pq.push(tg);
    }

    long long ans = 0;
    while(pq.size() > 1)
    {
        long long a = pq.top(); pq.pop();
        long long b = pq.top(); pq.pop();
        ans += a+b;
        pq.push(a+b);
    }

    cout << ans%du;

}