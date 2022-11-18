#include<stdio.h>
#include<stdlib.h> //ham rand() cho so ngau nhien
#include<time.h>
int main(){
	int so;
	int lonNhat=0;
	int nhoNhat=1000;
    srand ( time(NULL) );  //khoi tao so ngau nhien
    for(int i=0;i<10;i++){
    	so = rand()% 1000;
    	
    	if(lonNhat < so) lonNhat=so;
    
    	if(nhoNhat > so) nhoNhat=so;
    	printf(" %d ",so);
	}
	printf("\n So lon nhat la: %d",lonNhat);
	printf("\n So nho nhat la: %d",nhoNhat );
return 0;
}
