#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n; cin >> n; int x;
    vector<int>pre(n);
    for(int i = 0 ; i < n ; i++){
        cin >> pre[i];
    }
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1]+pre[i];
    }
    int k; cin >> k;
    vector<int>v(k);
    for (auto & e : v) cin >> e;
    for (int i =0 ; i < k ;i++){
        cout << ((lower_bound(pre.begin(),pre.end(),v[i])) - pre.begin())+1 << " ";
    }
}
int main(){
    solve();
}

