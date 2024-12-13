
#include <stdio.h>

int main() {
    int vetor[10], i, n = 0, x;

    for(i = 0; i<10; i++){
        scanf("%d ", &vetor[i]);
    }
    scanf("%d", &x);

    for(i = 0; i<10; i++){
        if(vetor[i] == x){
            n++;
        }
    }
    if (n != 0){
        printf("%d\n", n);
        for(i = 0; i<10; i++){
            if(vetor[i] == x){
                printf("%d ", i);
            }
        }
    } else{
        printf("Mia x");

    }

}
