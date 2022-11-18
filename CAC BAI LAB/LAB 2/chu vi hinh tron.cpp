#include<stdio.h>
int main (){
	// your code here. Tinh dien tich chu vi hinh tron
	const double PI= 3.14 ;
	double banKinh, chuVi, dienTich;
	printf("cho ban kinh hinh tron:");
	scanf("%lf",&banKinh);
	chuVi= 2*banKinh*PI;
	
	dienTich = banKinh * banKinh * PI;
	printf("\n Ban kinh hinh tron la %lf",banKinh);
    printf("\n chu vi hinh tron laf %lf",chuVi );
	printf("\n Dien tich hinh tron la %lf",dienTich);
	return 0;
}

