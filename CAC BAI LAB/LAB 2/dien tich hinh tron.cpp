#include<stdio.h>
int main(){
	int dai, rong; 
	printf("Cho chieu dai HCN:"); 
	scanf("%d", &dai); 
	
	printf("Cho chieu rong HCN:"); 
	scanf("%d", &rong);
	
	printf("\nDien tich %d", dai*rong); 
	printf("\nChu vi  %d", (dai+rong) * 2  ); 
	return 0; 
}

