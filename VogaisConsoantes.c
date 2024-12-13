#include <stdio.h>
#include <string.h>

int main(){
    char s[50], c[25] = "bcdfghjklmnpqrstvwxyz", v[10] = "aeiou", rv[10]= "", rc[25]= "";
    int value, vogais, index = 0,consoante;

    scanf("%s", s);
    value = strlen(s);
    vogais = strlen(v);
    consoante = strlen(c);

    for(int i=0; i < value; i++){
        for(int t=0; t < vogais; t++){
            if(s[i] == v[t]){
                rv[index++] = v[t];
            } else {
            }
        }
    }

    rv[index] = '\0';
    index = 0;

    for(int i=0; i < value; i++){
        for(int t=0; t < consoante; t++){
            if(s[i] == c[t]){
                rc[index++] = c[t];
            } else {
            }
        }
    }

     rc[index] = '\0';


    printf("Vogais: %s\nConsoantes: %s", rv, rc);
}
