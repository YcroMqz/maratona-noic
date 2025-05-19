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
    int x, count=0;
    bool was[100] = {0};

    fr(i, 6){cin >> x; was[x] = true;}
    fr(i, 6){
        cin >> x;
        if(was[x])count++;
    }
    if(count == 3) cout << "terno\n";
    else if(count == 4) cout << "quadra\n";
    else if(count == 5) cout << "quina\n";
    else if(count == 6) cout << "sena\n";
    else cout << "azar\n";
}

//link to the question: https://neps.academy/br/exercise/491