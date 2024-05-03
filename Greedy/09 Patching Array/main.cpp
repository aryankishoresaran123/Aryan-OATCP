#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums, int n){
    int n2=nums.size();
    long long maxreach=0;
    int ans=0;
    for(int i=0;i<n2;i++){
        while(nums[i]>(maxreach+1)){
            maxreach=2*maxreach+1;
            ans++;
            if(maxreach>=n){
                return ans;
            }
        }
        maxreach+=nums[i];
        if(maxreach>=n){
            return ans;
        }
    }
    while(maxreach<n){
        maxreach=2*maxreach+1;
        ans++;
    }
    return ans;
}

int main() {
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    string input;
    getline(cin, input);
    vector<int> nums;
    istringstream iss(input);
    int num;
    while(iss >> num){
        nums.push_back(num);
    }

    int n; cin>>n;

    cout<<solve(nums, n)<<'\n';
}
