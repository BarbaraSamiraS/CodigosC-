#include <stdio.h>

int main() {
    int vetor[10], i, x;

    for(i = 0; i<10; i++){
        scanf("%d ", &vetor[i]);
    }
    scanf("%d", &x);
    for(i = 0; i<10; i++){
        if(vetor[i] == x){
            printf("SIM");
            break;
        } else if(i == 9 && vetor[i] != x){
            printf("NAO");
        }
    }

}
