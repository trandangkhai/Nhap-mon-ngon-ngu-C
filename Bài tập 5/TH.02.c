#include <stdio.h>

int main() {
  int t, z;
  int c = 0;
  printf("\n nhap t:");
  scanf("%d",&t);
  for(z = 1; z <= t;z++){
    c = c + z;
  }
  printf("\n tong 1 + 2 +...+%d",c);
  return 0;
}
