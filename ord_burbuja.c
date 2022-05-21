#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int ord_vector[SIZE];
    srand(time(NULL));
    printf("Generacion de numeros aleatorios");
    for(int i=0; i<SIZE;i++){
        ord_vector[i]=100+rand()%11;
        printf("\n");
        printf("%d",ord_vector[i]);
    }
}