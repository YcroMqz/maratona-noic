#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define TAMX 100
#define TAMY 100

signed main(){
    int N, Xi, Xf, Yi, Yf;
    int mat[TAMX][TAMY] = {0};
    int Area = 0;

    cin >> N;

    fr(i, N){
        cin >> Xi >> Xf >> Yi >> Yf;
        for(int i = Xi; i < Xf; ++i){
            for(int j = Yi; j < Yf; ++j){
                 if(mat[i][j] == 0){mat[i][j] = 1; Area++;}
            }
        }
    }
    cout << Area << endl;
}

//link to the question: https://judge.beecrowd.com/pt/problems/view/2393