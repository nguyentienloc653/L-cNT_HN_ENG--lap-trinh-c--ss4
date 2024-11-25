#include <stdio.h>
int main (){
	int nam;
	printf("Nhap so nam :");
	scanf("%d",&nam);
	if(nam%4==0&&nam%100!=0){
		printf("Day la nam nhuan",nam);
	}else if(nam%400==0){
		printf("Day la nam nhuan",nam);
	}else {
		printf("Day khong phai nam nhuan",nam);
	}
	return 0;
}
