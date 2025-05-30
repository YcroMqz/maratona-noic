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
    float mat[12][12], sum=0;
    int cont = 0;
    char O;
    cin >> O;
    int n = 12;
    for(int i = 0; i < 12; ++i){
        for(int j = 0; j < 12; ++j){
            cin >> mat[i][j];
            if(j >= n and i != 0){
                sum += mat[i][j];
                cont++;
            }
        }
        n--;
    }
    if(O == 'S') cout << fixed << setprecision(1) << sum << endl;
    if(O == 'M') cout << fixed << setprecision(1) << sum/cont << endl;
}

//link to the question: https://judge.beecrowd.com/pt/problems/view/1186