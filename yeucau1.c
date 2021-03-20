#include <stdio.h>

int main(){

    int n, s;
    s = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for( i = 1; i<=n; i++){
    s+ = i*i;
    }
    printf("S = 1^2+ 2^2 + ... + %d^2 = % d ",n,s );
    
    return 0;

 
}
