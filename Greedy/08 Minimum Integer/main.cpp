#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    string num; int k;
    cin>> num>> k;

    stack<char> st;
    int n=num.size();
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and st.top()-'0'>num[i]-'0' and k>0)
        {
                st.pop();
                k--;
        }
        st.push(num[i]);
    }
    while(k-- and !st.empty())
    st.pop();
    string s="";
    while(!st.empty())
    {
        s.push_back(st.top());
        st.pop();
    }
    reverse(s.begin(),s.end());
    int j=0;
    while(s[j]=='0' and s.size()>1)
    {
        j++;
    }
    if(j!=0 and j<s.size())
        cout<< s.substr(j);
    else if(j==s.size())
        cout<< "0";
    else if(s=="")
        cout<< "0";
    else cout<< s;
}
