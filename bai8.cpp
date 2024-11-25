#include<stdio.h>
int main(){
	int a, b, c;
	printf("Nhap vao ba canh cua tam giac :");
	scanf("%d %d %d", &a, &b, &c);
	if(a+b>c&a+c>b&c+b>a){
		printf("Day la hinh tam giac",a,b,c);
	}else{
		printf("Day khong phai hinh tam giac",a,b,c);
	}
	return 0;
}
