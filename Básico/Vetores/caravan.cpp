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
    int N, sum = 0;
    cin >> N;
    int camel[N] = {0}, ans[N] = {0};

    fr(i, N){
        cin >> camel[i];
        sum += camel[i];
    }
    fr(i, N){
        ans[i] = (sum/N) - camel[i];
        cout << ans[i] << endl;
    }
}

//link to the question: https://neps.academy/br/exercise/2171