#include<stdio.h>
int main(){
	int nember;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&nember);
	if(nember%3==0&nember%5==0){
		printf("Chia het cho 3 va 5",nember);
	}else if(nember%5==0){
		printf("Chia het cho 5",nember);
	}else if(nember%3==0){
		printf("Chia het cho 3",nember);
	}else{
		printf("...",nember);
	}
	return 0;
}
