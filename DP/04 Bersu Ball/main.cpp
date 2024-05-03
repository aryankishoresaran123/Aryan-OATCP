/*
    GO TO THE END OF THE FILE FOR MAIN CODE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    int n, m; cin>> n>> m;
    vector<int> boys (n), girls(m);
    for(int i=0; i<n; i++)cin>>boys[i];
    for(int i=0; i<m; i++)cin>>girls[i];

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(abs(boys[i] - girls[j]) <= 1){
                ans++;
                girls[j] = 1e9;
                break;
            }
        }
    }

    cout<<ans<<'\n';
    return 0;
}