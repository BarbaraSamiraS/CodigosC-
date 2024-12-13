#include <stdio.h>

int main() {
    int vetor[10], i;

    for(i = 0; i<10; i++){
        scanf("%d ", &vetor[i]);
    }

    for(i = 9; i>=0; i--){
        printf("%d\n", vetor[i]);
    }

}
