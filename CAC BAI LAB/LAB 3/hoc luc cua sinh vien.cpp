#include<stdio.h>
int main(){
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
	return 0;
}

