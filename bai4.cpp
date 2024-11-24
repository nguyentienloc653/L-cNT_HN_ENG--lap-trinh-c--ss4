#include<stdio.h>
int main(){
	int month;
	printf("Nhap vao so thang:");
	scanf("%d",&month);
 if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        printf("Thang %d có 31 ngay\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d có 30 ngay\n", month);
    } else if (month == 2) {
        printf("Tháng 2 co 29 hoac 28 ngay\n");
    } else {
        printf("So thang khong hop le\n");
    }
		return 0;
	 
}
