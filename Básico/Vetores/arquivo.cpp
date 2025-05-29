#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'

map<tuple<int, int, int>, int> dp;

int solve(vi& combs, int index, int target, int start){
    int size = combs.size();
    if(index == 4) return target == 0 ? 1 : 0;
    if(start >= size) return 0;
    
    auto key = make_tuple(index, target, start);
    if(dp.count(key)) return dp[key];
    int ans = 0;
    for(int i = start; i < size; ++i){
        ans += solve(combs, index + 1, target - combs[i], i + 1);
    }
    return dp[key] = ans;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL);
    int N, M, Q, target;
    vi numbers;
    cin >> N;
    fr(i, N){
        cin >> M; numbers.pb(M);
    }
    cin >> Q;
    fr(i, Q){
        cin >> target;
        dp.clear();
        cout << solve(numbers, 0, target, 0) << endl;
    }
}