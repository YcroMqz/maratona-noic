#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *vet, int size){
    int end = size - 1, temp;
    for(int i = 0; i < size-1; ++i){
        int check = 0;
        for(int j = 0; j < end; ++j){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                check = 1;
            }
        }
        if(check == 0) break;
        end--;
    }
}
signed main(){
    int vet[10] = {9, 5, 2, 1, 4, 3, 8, 10, 7, 6};
    bubbleSort(vet, 10);
    for(int i = 0; i < 10; ++i){
        cout << vet[i] << " ";
    }
    cout << endl;
}