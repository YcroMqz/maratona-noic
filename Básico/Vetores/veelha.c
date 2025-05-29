#include <stdio.h>
#include <stdlib.h>

char X;
char Y;
char mat[3][3] = {
                  {'1', '2', '3'},
                  {'4', '5', '6'},
                  {'7', '8', '9'}
};

void slots(){
    printf("%c | %c | %c\n", mat[0][0],mat[1][0], mat[2][0]);
    puts("-----------");
    printf("%c | %c | %c\n", mat[0][1],mat[1][1], mat[2][1]);
    puts("-----------");
    printf("%c | %c | %c\n", mat[0][2],mat[1][2], mat[2][2]);
    printf("\n");
}

void replace(char a, char number){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == number){
                mat[i][j] = a;
            }
        }
    }
}

int evaluateVictory(){
    //horizontal
    if(mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]) return 1;
    else if(mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]) return 1;
    else if(mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]) return 1;
    //vertical
    else if(mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]) return 1;
    else if(mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2]) return 1;
    else if(mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2]) return 1;
    //diagonal
    else if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) return 1;
    else if(mat[2][0] == mat[1][1] && mat[1][1] == mat[0][2]) return 1;
    else return 0;
}

int main(){
    int count=0;
    while(1){
        slots();
        printf("Player X: ");
        scanf(" %c", &X);
        replace('X', X);
        system("clear");
        slots();
        if(count >= 3){
            if(evaluateVictory() == 1){
                printf("Vitória do player X\n"); break;
            }
        }
        printf("Player O: ");
        scanf(" %c", &Y);
        replace('O', Y);
        system("clear");
        slots();
        count++;
        if(count >= 3){
            if(evaluateVictory() == 1){
                printf("Vitória do player O\n"); break;
            }
        }
    }
}