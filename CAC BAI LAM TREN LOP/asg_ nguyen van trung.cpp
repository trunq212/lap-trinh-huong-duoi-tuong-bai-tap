0-#include<stdio.h>
#include<math.h>
void kiemsonguyen(){
    printf("\n1 .Kiem tra so nguyen .");
    //sv lam bai o day
    int soNguyen;
    printf("\nCho 1 so nguyen :");
    scanf("%d",&soNguyen);
    
    printf("\n%d la so nguyen",soNguyen);
    //kiem tra co phai nguyen to khong
    	bool nguyento =true;
	for (int i=2 ; i < soNguyen -1 ; i++)
	
	    if (soNguyen%i==0) nguyento=false ;
	if (nguyento ==true)
	   printf("\n %d Chinh la so nguyen to ",soNguyen);
	else 
   	printf("\n %d Khong phai la so nguyen to ",soNguyen);
}
void uocsovaboiso(){
	printf ("\n2. Uoc so va boi so");
	//sv lam bai o day

    int x,y,a,b;
    do

{
    printf("Nhap a,b = ");
    scanf("%d%d",&a,&b);
}

    while (a<=0 || b<=0);
            x=a;
            y=b;

    while(a!=b){
        if(a>b) a-=b;
        else b-=a;

}

        printf("Uoc chung lon nhat la %d",a);
        printf("\nBoi chung nho nhat la %d",(x*y)/a);
            
}
void tinhtienkaraoke(){
	printf("\n3. Tinh tien karaoke");
	//sv lam bai o day
	int a,b,c,d,tien;
do{

      printf("ban hay nhap gio bat dau:\n");
      scanf("%i",&a);
      printf("ban hay nhap gio ket thuc:\n");
      scanf("%i",&b);
}while(a<=12 && b>=23);
      c=b-a;
  if(a>=17 && b<=23 && c<3)
{
    	tien=c*30000;
	    printf("so tien ban phai tra :%i",tien);
}
  if(c<=3 && a>=14 && b<=17 )
{
	    tien=c*30000*90/100;
	    printf("so tien phai tra :%i",tien);
}
  else if(c>3 && a>=12 && b<=23)
{
    	d=c-3;
	    tien=(d*30000*70/100*10/100)+(3*30000*10/100);
	    printf("so tien phai chi tra %i",tien);
}else if(a>=14 && b<=17 &&c<=3)
{
	tien=c*30000*90/100;
	printf("so tien phai chi tra:%i",tien);
}else if(a>=14 && b<=17 && c>3)
{	
    
	tien=(c*30000*60/100);
	printf("so tien phai tra tien: %i",tien);
}
	
	
}
void tinhtiendien(){
	printf("\n4. Tinh tien dien");
	//sv lam bai o day
}
void doitien(){
	printf("\n5. Doi tien");
	//sv lam bai o day
}
void tinhlaixuat(){
	printf("\n6. Tinh lai xuat");
	//sv lam bai o day
}
void vaytienmauxe(){
	printf("\n7. Vay tien mua xe");
	//sv lam bai o day
}
void sapxepsinhvien(){
	printf("\n8. Sap xep sinh vien ");
	//sv lam bai o day
}
void xaydunggame(){
	printf("\n9. Xay dung game ");
	//sv lam bai o day
}
void tinhtoanthongso(){
	printf("\n10.tinh toan thong so ");
	//sv lam bai o day
}
void ketthucchuongtrinh(){
	printf("\n11.Ket thuc chuong trinh");
	
	
}



void menu (){
	printf("\n1. Kiem tra so nguen");
	printf("\n2. Uoc so va boi so");
	printf("\n3. Tinh tien karaoke");
	printf("\n4. Tinh tien dien");
	printf("\n5. Doi tien");
	printf("\n6. Tinh lai xuat");
	printf("\n7. Vay tien mua xe");
	printf("\n8. Sap xep sinh vien ");
	printf("\n9. Xay dung game ");
	printf("\n10.tinh toan thong so ");
	printf("\nBan chon so nao ?");
}
int main (){
    int chon ;
    do {
     	menu();
     	scanf ("%d",&chon);
	    printf ("\nban da chon :%d",chon);
	    switch (chon){
	    	case 1: kiemsonguyen();              break;
	    	case 2: uocsovaboiso();              break;
	    	case 3: tinhtienkaraoke();           break;
	    	case 4: tinhtiendien();              break;
	    	case 5: doitien();                   break;
	    	case 6: tinhlaixuat();               break;
	    	case 7: vaytienmauxe();              break;
	    	case 8: sapxepsinhvien();            break;
	    	case 9: xaydunggame();               break;
	    	case 10:tinhtoanthongso();           break;
	    	case 11:ketthucchuongtrinh();        break;
	    	
		}
	
	}while (chon !=11);
	
	return 0;
}

