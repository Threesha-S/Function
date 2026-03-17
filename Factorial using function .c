#include <stdio.h>

int factorial(int n){
    int i,fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d", factorial(N));

    return 0;
}