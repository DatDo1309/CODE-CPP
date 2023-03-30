#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    map<char, int> mp;
    while(cin >> c)
    {
        mp[c]++;
    }

    priority_queue<int> pq;
    for (auto it:mp)
    {
        pq.push(it.second);
    }

    while(!pq.empty())
    {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        cout << a << " " << b << endl;
        if (a!=b)
        {
            cout << "NO"; return 0;
        }
    }
    cout << "YES"; return 0;
}