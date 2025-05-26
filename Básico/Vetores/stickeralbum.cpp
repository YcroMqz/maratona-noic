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

    int N, M, sticker;
    cin >> N; cin >> M;

    int quant = N;
    int vet[N+1] = {0};

    fr(i, M){
        cin >> sticker;
        if(vet[sticker] == 0){
            vet[sticker] = 1;
            quant--;
        }
    }
    cout << quant << endl;
}

//link to the question: https://neps.academy/br/exercise/163