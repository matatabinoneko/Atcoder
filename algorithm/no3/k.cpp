#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void)
{
    int n, q;
    cin >> n >> q;

    vector<int> root(n);
    for (int i = 0; i < n; i++)
    {
        root[i] = i;
    }

    vector<&int> container(n);
    for (int i = 0; i < n; i++)
    {
        container[i] = *root[i]
    }
    cout << *container[0] << endl;
    return 0;
}