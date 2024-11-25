#include<stdio.h>
int main (){
	int chiSoCu, chiSoMoi, soDien;
	float giaTien;
	printf("Nhap vao chi so cu va chi so moi:");
	scanf("%d %d", &chiSoCu, &chiSoMoi);
	soDien = chiSoMoi-chiSoCu;
	if(0<=soDien&soDien<50){
		giaTien = soDien*10000;
	}else if(50<=soDien&soDien<100){
		giaTien = soDien*15000;
	}else if(100<=soDien&soDien<150){
		giaTien = soDien*20000;
	}else if(150<=soDien<200){
		giaTien = soDien*25000;
	}else{
		giaTien=soDien*30000;
	}
	printf("So tien dien phai tra la: %.2f VND\n", giaTien);
	return 0;
}
