#include <bits/stdc++.h>
using namespace std;

int main()
{
        int k;
        string s;
        cin >> k >> s;
        map<char, long long> mp;
        for (int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        priority_queue<long long> pq;
        for (auto it:mp)
        {
            pq.push(it.second);
        }

        while (k--) 
        {
            if (pq.empty()) break;
            int top1 = pq.top(); pq.pop();
            if (top1==0)    break;
            top1--;
            pq.push(top1);
        }

        long long ans = 0;
        while (!pq.empty()) 
        {
            long long f = pq.top(); pq.pop();
            ans += f*f;
        }
        cout << ans << endl;
}
