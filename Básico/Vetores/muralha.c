#include <stdio.h>

int n, x, p, m, g, sum = 0, cout = 1;

int checkTitan(char vet){
    if(vet == 'P') return p;
    if(vet == 'M') return m;
    if(vet == 'G') return g;
}

int main(){

    scanf("%d %d", &n, &x);
    getchar();
    int x1 = x;
    char str[n + 1];
    fgets(str, sizeof(str), stdin);
    scanf("%d %d %d", &p, &m, &g);
    int sizeTitan;
    int new = x;
    for(int i = 0; i < n; i++){
        sizeTitan = checkTitan(str[i]);
        if(sizeTitan <= x) x -= sizeTitan;
        else{cout++; x = x1 - sizeTitan;}
    }
    printf("%d\n", cout);
}