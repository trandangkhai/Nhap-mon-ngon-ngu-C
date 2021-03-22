#include <stdio.h>

int main() {
  int n,tangdan ;
  printf("nhap n :");
    scanf("%d",&n);
    int a[n];
for(int i = 0; i < n; i++){
       printf(" nhap a[%d] = ", i);
        scanf("%d", &a[i]);
}
for(int i = 0; i < n; i++){
    for(int j=0;j<=i;j++)
       if(a[j]>a[i]){
                tangdan=a[i];
                a[i]=a[i];
                a[i]=tangdan;
}
}

  printf("\n mang sap xep tang dan :");
    for(int i = 0; i < n; i++){
    printf("\t%d", a[i]);
  }
   return 0;
    }
