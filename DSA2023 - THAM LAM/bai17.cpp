#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    sort(a, a+n);

    int max_product = max(a[0]*a[1], a[n-2]*a[n-1]);
    max_product = max(max_product, a[0]*a[1]*a[n-1]);
    max_product = max(max_product, a[n-3]*a[n-2]*a[n-1]);

    cout << max_product << endl;

    return 0;
}






