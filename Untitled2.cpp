#include <stdio.h>
int main ()
{

	int nember;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&nember);
	if(nember%2==0){
	printf("%d la so chan\n",nember);
	}else {
		printf("%d la so le\n",nember);
	}
	return 0;
	
}
