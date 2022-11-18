#include<stdio.h>
int main (){
	int n;
    printf("\nNhap vao so nguyen to :");
    scanf("%d",&n);
    //kiem tra 
    bool ok = true;
    for (int i=2; i<n ; i++) if (n%i==0) ok = false;
    //in ra
    if (ok == true) printf ("\n %d la so nguyen to",n);
    else printf ("\n%d khong phai  so nguen to ",n);
    
	return 0;
}

