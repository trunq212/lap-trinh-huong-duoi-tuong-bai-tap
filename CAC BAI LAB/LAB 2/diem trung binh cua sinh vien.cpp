#include<stdio.h>
#include<string.h>
// nhap ten va diem toan ly hoa, in ra DTB
int main (){
	// your code here
	char ten[40];
	float x,y,z;
	printf("\nCho ten sinh vien:");
	gets(ten);
	printf("\nCho diem Toan Ly Hoa :");
	scanf("%f %f %f", &x, &y, &z); 	
	printf("\nSinh vien %s co diem trung binh la %.1f:", strupr(ten),   ((x+y+z)/3));
	
	return 0;
}
