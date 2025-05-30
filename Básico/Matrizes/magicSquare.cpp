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
    int mat[3][3], sum, check=0;
    string ans = "SIM";
    for(int i = 0; i < 3; ++i){
        sum = 0;
        for(int j = 0; j < 3; ++j){
            cin >> mat[i][j];
            sum += mat[i][j];
        }
        if(check == 0) check = sum;
        if(check != sum) ans = "NAO";
    }
    if(ans == "SIM")
    for(int i = 0; i < 3; ++i){
        sum = 0;
        for(int j = 0; j < 3; ++j){
            sum += mat[j][i];
        }
        if(check != sum) ans = "NAO";
        else break;
    }
    if(ans == "SIM"){
        int diag1 = mat[0][0] + mat[1][1] + mat[2][2];
        int diag2 = mat[0][2] + mat[1][1] + mat[2][0];

        if(diag1 == check and diag2 == check) ans = "SIM";
        else ans = "NAO";
    }

    cout << ans << endl;
}

//link to the question: https://neps.academy/br/exercise/198