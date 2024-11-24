#include<stdio.h>
int main(){
	int x, y, z;
	printf("Nhap 3 so nguyen:");
	scanf("%d %d %d", &x, &y, &z);
	if(x<z&y>z){
		printf("So thu 3 nam giua",x,y,z);
	}else if(x>z&y<z){
		printf("So thu 3 nam giua",x,y,z);
	}
	else{
		printf("khong hop le",x,y,z);
	}
	return 0;
}
