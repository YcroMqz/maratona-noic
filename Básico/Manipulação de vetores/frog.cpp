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
    int M, N, P, D, j;

    cin >> N >> M;

    bool frogs[N] = {0};

    fr(i, M){
        cin >> P >> D;
        for(j = P - 1; j < N; j += D){
            frogs[j] = true;
        }
        for(j=j-D; j >=0; j -= D){
            frogs[j] = true;
        }
    }
    fr(i, N) cout << frogs[i] << endl;
}

//link to the question: https://neps.academy/exercise/529