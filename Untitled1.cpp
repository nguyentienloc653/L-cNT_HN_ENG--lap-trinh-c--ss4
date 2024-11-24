#include <stdio.h>
int main (){
	int nember;
	printf("Nhap vao mot so bat ky:");
	scanf("%d",&nember);
	if(nember>0){
		printf("Day la so nguyen duong\n",nember);
	}else if(nember<0){
		printf("Day la so nguyen am\n",nember);
	}else {
		printf("Khong phai so nguyen am hay so nguyen duong\n",nember);
	}
	return 0;
}
