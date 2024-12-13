
#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], letra[2];
    int quant = 0, value;

    scanf("%s", nome);
    value = strlen(nome);
    scanf("%s", letra);

    for(int i=0; i < value; i++){
        if(nome[i] != letra[0]){
        } else {
            quant++;
        }
    }

    printf("%d", quant);
}
