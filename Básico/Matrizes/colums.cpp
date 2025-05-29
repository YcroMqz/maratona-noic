#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
using namespace std;

signed main(){
    int C;
    float mat[5][5], sum=0;
    char T;

    cin >> C;
    cin >> T;

    for(int i = 0; i < 12; ++i){
        for(int j = 0; j < 12; ++j){
            cin >> mat[i][j];
            if(j == C) sum += mat[i][j];
        }
    }
    if(T == 'S') cout << sum << endl;
    if(T == 'M') cout << fixed << setprecision(1) << sum/12 << endl;
}

//link of the question: https://judge.beecrowd.com/pt/problems/view/1182