
# include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if(a>b) {
        while(b!=a+1){
        printf("%d ", b);
        b++;
        }
    }else{
        while(a!=b+1){
        printf("%d ", a);
        a++;
        }
    }

}
