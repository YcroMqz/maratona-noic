#include <bits/stdc++.h>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define debv(v) for(auto e : v) cout << e << " "; cout << endl
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define INF 1e9
using namespace std;

signed main(){
    int N, range, menorZero, maiorZero;
    cin >> N;
    int tape[N] = {0};
    menorZero = -INF;
    fr(i, N){
        cin >> tape[i];
    }
    fr(i, N){
        if(tape[i] == 0) menorZero = i;
        if(tape[i] == -1){
            for(int j = i; j < N; ++j){
                if(tape[j] == 0){
                    maiorZero = j; break;
                }
            }
            if(abs(maiorZero - i) < abs(menorZero - i)) 
            tape[i] = min(abs(maiorZero - i), 9);
            else tape[i] = min(abs(menorZero - i), 9);
        }
    }
    debv(tape);
}