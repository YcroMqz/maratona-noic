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
    int A, B, ans;
    char vet[3];
    cin >> A;
    cin >> B;
    vet[A%3] = 'A'; ans = A%3;
    if(B%3 == ans) vet[(ans+1)%3] = 'B';
    else vet[B%3] = 'B';
    fr(i, 3){
        if(vet[i] != 'A' and vet[i] != 'B') cout << i;
    }
    cout << endl;
}

//link to the question: https://neps.academy/br/exercise/571