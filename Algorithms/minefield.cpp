#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int vet[N];
    vi ans(N, 0);
    fr(i, N){
        cin >> vet[i];
    }
    fr(j, N){
        if(vet[j] == 1){
            ans[j]++;
            if(j > 0) ans[j - 1]++;
            if(j < N - 1) ans[j + 1]++;
        }
    }
    fr(k, N) cout << ans[k] << endl;
    return 0;
}

//link to the question: https://neps.academy/br/exercise/241