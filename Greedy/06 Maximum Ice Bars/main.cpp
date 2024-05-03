#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    int n; cin >> n;
    vector<int> costs(n);
    for(int i = 0; i < n; i++) cin >> costs[i];

    int totalCoins; cin >> totalCoins;

    sort(costs.begin(), costs.end());
    int i = 0, ans = 0;
    while(i < n && totalCoins > 0){
        if(costs[i] <= totalCoins){
            ans++; 
            totalCoins -= costs[i];
        }
        i++; 
    }

    cout << ans << '\n';
}
