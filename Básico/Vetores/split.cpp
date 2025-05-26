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
    int N, maxn = 0, pos, sum = 0;
    cin >> N;
    int number[N];
    fr(i, N){
        cin >> number[i];
        if(number[i] > maxn){
            maxn = number[i];
            pos = i;
        }
    }
    fr(i, pos){
        sum += number[i];
    }
    cout << sum << endl;
    sum = 0;
    for(int i = pos + 1; i < N; i++){
        sum += number[i];
    }
    cout << sum << endl;
}

//link to the question: https://neps.academy/br/exercise/1601