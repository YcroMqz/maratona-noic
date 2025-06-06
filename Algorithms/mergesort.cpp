#include <bits/stdc++.h>
using namespace std;

void merge(int *vet, int start, int half, int end){
    int tam = end - start + 1;
    int* temp_vet = new int[tam];
    int top_l = start, k = 0;
    int top_r = half+1;
    while(top_l <= half && top_r <= end){
        if(vet[top_l] > vet[top_r]){
            temp_vet[k] = vet[top_r];
            top_r++; k++;
        }else{
            temp_vet[k] = vet[top_l];
            top_l++; k++;
        }
    }
    while(top_l <= half){
        temp_vet[k] = vet[top_l];
        top_l++; k++;
    }
    while(top_r <= end){
        temp_vet[k] = vet[top_r];
        top_r++; k++;
    } int j = 0;
    for(int i = start; i <= end; i++){
        vet[i] = temp_vet[j];
        j++;
    }
    delete[] temp_vet;
}

void mergeSort(int *vet, int start, int end){
    if(start < end){
        int half = (start + end)/2;
        mergeSort(vet, start, half);
        mergeSort(vet, half+1, end);
        merge(vet, start, half, end);
    }
}

signed main(){
    int vet[20] = {25, 7, 91, 13, 50, 3, 88, 62, 19, 44, 77, 30, 5, 99, 10, 71, 36, 8, 55, 22};
    mergeSort(vet, 0, 19);

    for(int i = 0; i < 20; ++i){
        cout << '[' << vet[i] << ']';
    }
    cout << endl;

    return 0;
}