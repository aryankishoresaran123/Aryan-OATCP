#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int func(vector<int> &nums)
{
    int maxi = INT_MIN;
    int prod = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        prod *= nums[i];
        maxi = max(prod, maxi);
        if (prod == 0)
            prod = 1;
    }
    prod = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        prod *= nums[i];

        maxi = max(prod, maxi);
        if (prod == 0)
            prod = 1;
    }
    return maxi;
}

void solve()
{
    int n;
    cin >> n;
    if(n==0){
        cout << 0 ;
        return;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << func(v) ;
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    freopen("errorf.txt", "w", stderr);
#endif
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}