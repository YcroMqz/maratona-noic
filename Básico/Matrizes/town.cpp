#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define int long long
#define INF 1e9

using namespace std;

signed main(){
    int N, maxPos = -1;
    cin >> N;
    int L[N] = {0}, C[N] = {0}, mat[N][N];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> mat[i][j];
            L[i] += mat[i][j];
            C[j] += mat[i][j];
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if((L[i] + C[j] - 2 * mat[i][j]) > maxPos){
                maxPos = L[i] + C[j] - 2 * mat[i][j];
            }
        }
    }
    cout << maxPos << endl;
}

//link to the question: https://neps.academy/br/exercise/45