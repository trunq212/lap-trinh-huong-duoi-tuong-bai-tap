#include<stdio.h>
int main(){
	bool ok= false;
	printf("Cac so nguyen to trong pham vi 1000 la:");
    for(int i=2;i<=1000;i++){
    	// kiem tra
    	ok = true;
    	for(int j=2;j<i;j++) if (i%j==0) ok=false;
    	//in ra
    	if (ok == true) printf(" %d",i);
	}
return 0;
}

