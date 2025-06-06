#include <bits/stdc++.h>
using namespace std;

int N, Q;

void vizinhos(int mat[N+1][N+1], int vizin){
    for(int i = 1; i < N; ++i){
        for(int j = 1; j < N; ++j){
            if(mat[i][j] == 1){
                for(int k = i-1; k < i+3; i++){
                   for(int l = j-1; l < j+3; j++){
                        if(k == i && l == j) continue;
                        vizin[k][l] += 1;
                    }
                }
            }
        }
    }
    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            if(mat[i][j] == 0){
                if(vizin[i][j] == 3) mat[i][j] = 1;
            }
            if(mat[i][j] == 1){
                if(vizin[i][j] == 2 || vizin[i][j] == 3) mat[i][j] = 1;
            }
            if(mat[i][j] == 1 and vizin[i][j] > 3) mat[i][j] = 0;
        }
    }
}

signed main(){
    cin >> N >> Q;
    int mat[N+1][N+1];
    int vizin[N+1][N+1] = {0};

    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
            }
        }
    }
    vizinhos(mat, vizin, N);
    for(int i = 1; i < N; ++i){
        for(int j = 1; j < N; ++j){
            cout << mat[i][j];
        }
        cout << endl;
    }
}