#include<stdio.h>
int main (){
	// your code here
	int year;
	printf("\nCho nam duong lich:");
	
	scanf("%d",&year);
	
	printf("\nNam %d la:",year);
	if ((year%4==0) && !(year%100== 0 && year%400 !=0 ))
	     printf("\nLa nam nhuan");
	else 
	     printf("\nNam khong phai nam nhuan");
	return 0;
}

