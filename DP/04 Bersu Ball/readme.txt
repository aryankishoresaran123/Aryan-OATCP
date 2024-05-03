#include <bits/stdc++.h>
using namespace std;

int main() {
    //for taking input from input.txt and output to output.txt
    //and changing file names for different test cases
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];

    int p1 = nums[0], p2 = nums[0];
    int ans = nums[0];
    for(int i=1; i<n; i++){
        int store = max({nums[i], p1 * nums[i], p2 * nums[i]});
        p2 = min({nums[i], p1 * nums[i], p2 * nums[i]});
        p1 = store;

        ans = max(ans, p1);
    }
    cout<<ans<<'\n';
    return 0;
}