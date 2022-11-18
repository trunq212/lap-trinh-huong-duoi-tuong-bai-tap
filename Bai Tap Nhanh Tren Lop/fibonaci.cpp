#include<stdio.h>
int main(){
	int a=1,b=1,c=a+b;
	printf(" Day so Fibonacy : %d  %d",a,b);
	do{
		c=a+b;
		a=b;
		b=c;
		printf("  %d  ",c);
		
	}while (c<=1000);



return 0;
}

