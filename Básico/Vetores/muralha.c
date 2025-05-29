#include <stdio.h>

int n, x, p, m, g, cout = 1;

int checkTitan(char vet){
    if(vet == 'P') return p;
    if(vet == 'M') return m;
    if(vet == 'G') return g;
    else return 0;
}

int main(){
    int muralha2 = 0;
    int muralha3 = 0;

    scanf("%d %d", &n, &x);
    getchar();

    int muralha1 = x;
    char str[n + 1];

    fgets(str, sizeof(str), stdin);
    scanf("%d %d %d", &p, &m, &g);

    int sizeTitan;

    for(int i = 0; i < n; i++){
        int stoped = 0;
        sizeTitan = checkTitan(str[i]);
        if(sizeTitan <= muralha1){
            muralha1 -= sizeTitan;
            stoped = 1;
        }
        else if(sizeTitan <= muralha2){
            muralha2 -= sizeTitan;
            stoped = 1;
        }
        else if(sizeTitan <= muralha3){
            muralha3 -= sizeTitan;
            stoped = 1;
        }
        if(muralha1 < p && muralha2 > p) muralha1 = muralha2;
        if(muralha2 < p) muralha2 = muralha3;
        if(muralha3 < p) muralha3 = 0;
        if(stoped == 0){
            if(muralha1 == 0 || muralha1 < p){
                muralha1 = x - sizeTitan;
            }
            else if(muralha2 == 0 || muralha2 < p){
                muralha2 = x - sizeTitan;
            }
            else if(muralha3 == 0 || muralha3 < p){
                muralha3 = x - sizeTitan;
            }
            cout++;
        }
    }
    printf("%d\n", cout);
}