#include <bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}

int main() {
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    string input;
    getline(cin, input);
    vector<int> arr;
    istringstream iss(input);
    int num;
    while(iss >> num){
        arr.push_back(num);
    }

    sort(arr.begin(),arr.end(),compare);
    string ans = "";
    for(int i = 0;i<arr.size();i++)
    ans+=to_string(arr[i]);
    if(ans[0]=='0') cout<< "0";
    else cout<< ans;
}
