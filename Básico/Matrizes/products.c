#include <stdio.h>

int products[3][4];
float prices[4];
int sumStorage;
int sumProducts;
float price;

void printStock(){
    printf("c)ESTOQUE:\n");
    for(int i = 0; i < 4; ++i){
        printf("PRODUTO %d:\n", i+1);
        for(int j = 0; j < 3; ++j){
            printf("Armazem %d: %d\n", j+1, products[j][i]);
        }
    }
}
void quantProd(){
    printf("d) Quantidade total de produtos por armazém:\n");
    for(int i = 0; i < 3; ++i){
        sumStorage = 0;
        for(int j = 0; j < 4; ++j){
            sumStorage += products[i][j];
        }
        printf("ARMAZÉM %d: %d\n", i+1, sumStorage);
    }
}
void quantType(){
    printf("e) Quantidade total de produtos por tipo:\n");
    for(int i = 0; i < 4; ++i){
        sumProducts = 0;
        for(int j = 0; j < 3; ++j){
            sumProducts += products[j][i];
        }
        printf("PRODUTO %d: %d\n", i+1, sumProducts);
    }
}
void priceStorage(){
    printf("g) Custo total por armazém:\n");
    for(int i = 0; i < 3; ++i){
        price = 0;
        for(int j = 0; j < 4; ++j){
            price += products[i][j] * prices[j];
        }
        printf("ARMAZENAMENTO %d: %.2f\n", i+1, price);
    }
}
void priceProducts(){
    printf("h) Custo total por produto:\n");
    for(int i = 4; i < 4; ++i){
        price = 0;
        for(int j = 0; j < 3; ++j){
            price += products[j][i] * prices[i];
        }
        printf("PRODUTO %d: %.2f\n", i+1, price);
    }
}
int main(){
    printf("a)Digite o estoque:\n");
    for(int i = 0; i < 3; ++i){
        printf("ARMAZEM %d:\n", i+1);
        for(int j = 0; j < 4; ++j){
            printf("Produto %d: ", j+1);
            scanf("%d", &products[i][j]);
        }
    }
    printf("b)Digite o custo de cada produto:\n");
    for(int i = 0; i < 4; ++i){
        printf("Produto %d: R$ ", i+1);
        scanf("%f", &prices[i]);
    }

    printStock();
    quantProd();
    quantType();
    priceStorage();
    priceProducts();

    return 0;
}