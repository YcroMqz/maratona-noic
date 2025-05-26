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
    int N, integ, index = 0, sum = 0;
    cin >> N;
    int vet[N] = {0};
    fr(i, N){
        cin >> integ;
        if(integ != 0){
            vet[index++] = integ; sum += integ;
        }
        else if(index > 0){
            sum -= vet[--index];
        }
    }
    cout << sum << endl;
}

//link to the question: https://neps.academy/br/exercise/1486