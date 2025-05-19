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
    int N, num, maxn = 0;
    cin >> N;
    int was[13] = {0};

    fr(i, N){
        cin >> num;
        was[num]++;
        maxn = max(maxn, was[num]);
    }
    fr(i, 13){
        if(was[i] == maxn) cout << i << " ";
    }
    cout << endl;
}

//link to the question: https://neps.academy/br/exercise/188