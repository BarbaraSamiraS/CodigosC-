
#include <stdio.h>

int soma(){
    int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    return B+C;
}
int main(){
    int resul;
	resul = soma();
    if((resul%2) == 0) {
        printf("Bino");
    } else{
        printf("Cino");
    }
}
