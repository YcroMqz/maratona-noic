#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; i -= (-1))
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define INF 1e9
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N, number, count=0;
    char L;
    cin >> N;
    int D[61] = {0};
    int E[61] = {0};
    fr(i, N){
        cin >> number; cin >> L;
        if(L == 'D') D[number]++;
        if(L == 'E') E[number]++;
        if(L == 'D' and E[number] > 0){
            count++; E[number]--; D[number]--;
        }
        if(L == 'E' and D[number] > 0){
            count++; E[number]--; D[number]--;
        }
    }
    cout << count << endl;
}