#include <stdio.h>
int aux, value;
int fibonacci(int n){
    if (n < 1){
        value = 1;
        return 1;

    } else if(n < 3) {
        value = n;
        return n;

    } else if(aux == n){
        return value;

    }else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int  main(){
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}
