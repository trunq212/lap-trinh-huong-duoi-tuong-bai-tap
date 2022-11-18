#include<stdio.h>
#include<math.h>
int main(){
	printf("MENU chuong trinh: \n");
	printf("\t1. Hoc luc sinh vien: \n");
	printf("\t2. Ham so bac mot: \n");
	printf("\t3. Ham so bac hai: \n");
	printf("\t4. Tinh tien dien: \n");
	printf("\nLua chon cua ban la: \n");
	int choose;
	scanf("%d",&choose);
	
	switch(choose){
		case 1:
		printf("Hoc luc cua sinh vien");
		float Diem ;
	printf("\nNhap diem:");
	scanf("%f",&Diem);
	if (Diem<0){
		printf("Diem bi sai");
	}
	else if (Diem>10){
		printf("Diem bi sai");	
	}
	else if(Diem>=9){
		printf("\nHello");
		printf("\nXin chuc mung ban");
		printf("\nBan hoc luc xuat sac");
	}
	else if (Diem>=8){
		printf("\nHello");
		printf("\nChuc mung ban da du dieu kien du thi");
		printf("\nBan xep loai gioi");
	}
	else if (Diem>=6.5){
		printf("\nHello");
		printf("\nChuc mung ban da du dieu kien du thi");
		printf("\nBan xep loai kha");
	}
	else if (Diem>=5){
		printf("\nHello");
		printf("\nChuc mung ban da du dieu kien du thi");
		printf("\nBan xep loai trung binh");
	}
	else if (Diem>=3.5){
		printf("\nHello");
		printf("\nBan khong du dieu kien du thi");
		printf("\nBan xep loai yeu");
	}
	else{
		printf("\nHello");
		printf("\nBan khong du dieu kien du thi");
		printf("\nBan xep loai kem");
	}
		break;
		case 2:
		printf("\tHam so bac mot");
		int a,b;
	float x;
	printf("\nphuong trinh co dang ax+b=0");
	printf("\nnhap vao so a,b: ");
	scanf("%d %d",&a,&b);
	if(a==0 && b==0){
		printf("\nphuong trinh vo so nghiem");
	}else if(a==0 && b!=0){
		printf("\nphuong trinh vo nghiem");
	}else{
	x=(float)-b/a; 
	printf("\nphuong trinh co nghiem la: %.2f",x);}
		break;
		case 3:
		printf("\tHam so bac hai");
		int c;
	int delta;
	float x1,x2;
	printf("\ncho ba so a, b, c:");
	scanf("%d %d %d", &a,&b,&c);
	printf("\n ba so a,b,c vua nhap la: a=%d b=%d c=%d", a,b,c);
	delta = b*b-4*a*c;
	printf("\nso delta la:%d",delta);
	if (a==0) {
	printf("\nphuong trinh tro thanh %dx+%d=0",b,c);}
	else if (a!=0 && delta>0) {
		x1= (-b -sqrt(delta)) / (2*a);
		x2= (-b +sqrt(delta)) / (2*a);
		printf("\nphuong trinh co hai nghiem la x1=%.2f,x2=%.2f", x1,x2);
	} else if(a!=0 && delta<0)
	  printf("\nphuong trinh vo nghiem");
	  else if(a!=0 && delta==0){
	  x=-b/(2*a);
	  printf("\nphuong trinh co nghiem kep la %.1f",x);}
		break;
		case 4:
		printf("\tTinh tien dien");
		float sodien, tiendien;
 	int b1, b2, b3, b4, b5, b6;
 	b1=1678;
	 b2=1734;
	 b3=2014;
	 b4=2536;
	 b5=2834;
	 b6=2927;
 printf("\nNhap vao so dien cua ban: ");
 scanf("%f",&sodien);
 if(sodien<0){
 printf("\nnhap lai so dien");
 }else if(sodien<=50){
  tiendien=sodien*b1;
  printf("\ndien tu 0 - 50 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=100){
  tiendien=50*b1+((sodien-50)*b2);
  printf("\ndien tu 51 - 100 kWh, so tien  phai tra la: %.2f",tiendien);
 }else if(sodien<=200){
  tiendien=50*b1+(50*b2)+((sodien-100)*b3);
  printf("\ndien tu 101 - 200 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=300){
 tiendien=50*b1+(50*b2)+(100*b3)+((sodien-200)*b4);
  printf("\ndien tu 201 - 300 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=400){
  tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+((sodien-300)*b5);
  printf("\ndien tu 301 - 400 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien>400){
  tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+(100*b5)+((sodien-400)*b6);
  printf("\ndien tren 400 kWh, so tien phai tra la: %.2f",tiendien);
 }
		break;
		default:
			printf("\nNhap so khong dung(1-4)");
	}
	
	
	
	
	return 0;
}
