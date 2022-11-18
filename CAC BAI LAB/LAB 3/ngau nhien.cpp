#include<stdio.h>
#include<stdlib.h>  //ham rand() cho so ngau nhien
#include<time.h>
int main (){ 

	srand (time(NULL)); //khoi tao so ngau nhien 
	printf("\nGiai 7 :%d",rand()%100);   
	printf("\nGiai 6 :%d,%d",rand()%1000,rand()%1000);   
	printf("\nGiai 5 :%d,%d,%d",rand()%10000,rand()%10000,rand()%10000);   
	return 0;
}

