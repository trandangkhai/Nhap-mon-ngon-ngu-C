#include <stdio.h>

int main() {
	//khai bao va gan bien a
	int a;
	a=4;
	//khai bao va gan bien b
	int b = 2;
	//khai bao va gan bien c,d
	int c = 1, d=3;
	//khai bao bien e, f, g
	int e,f,g;
	//in bien a
	printf("bien a= %i, bien b = %i\n",a,b);
	printf("tong %i va %i = %i\n",a,b,a+b );
	printf("((a+b)-c)*d=((%i + %i)-%i)*%i = %i",a,b,c,d,((a+b)-c)*d);
	return 0;
	
}
