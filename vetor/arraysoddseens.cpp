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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int numbers, indexOdd = 0, indexEven = 0;
    int odd[10], even[10];

    fr(i, 10){
        cin >> numbers;
        if(numbers%2 == 0) even[indexEven++] = numbers;
        else odd[indexOdd++] = numbers;
    }
    fr(i, indexEven) cout << even[i] << " "; cout << endl;
    fr(i, indexOdd) cout << odd[i] << " "; cout << endl;
}

//link to the question: https://neps.academy/br/exercise/194