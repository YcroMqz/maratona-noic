#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define fr(i, n) for(int i = 0; i < n; ++i)
#define frv(x, n) for(auto x : n)
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, vogal, consoante;
    cin >> S;
    frv(x, S){
        if(string("aeiou").find(x) != string
    ::npos) vogal += x;
        else consoante += x;
    }
    cout << "Vogais: " << vogal << endl;
    cout << "Consoantes: " << consoante << endl;
}

//link to the question: https://neps.academy/exercise/399