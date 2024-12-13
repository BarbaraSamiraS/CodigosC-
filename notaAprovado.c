
#include <stdio.h>

int main() {
    float n1, n2, med;
    scanf("%f%f", &n1, &n2);
    med = (n1*2+n2*3)/5;

    if(med >= 7) {
        printf("Aprovado");
    } else if( med < 3) {
        printf("Reprovado");
    }else {
        printf("Final");
    }
}



