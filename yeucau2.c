#include <stdio.h>
int main(){
	//khai bao bien R kieu double
 double R = 2.5;
    //khai bao hang ten PI 3.14
const double PI = 3.14;
    //khai bao 2 bien cv va dt kieu double
    //cv la chu vi, dt la dien tich
double CV,DT;
printf("R= %.1f",R);
printf("\n");
printf("PI:%.2f",PI);
CV = 2*R*PI;
DT = R*R*PI;
printf("\n");
printf("2*R*PI\tR*R*PI\n%.1f\t%.1f",CV,DT);
return 0; 
}  
