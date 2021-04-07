#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("Nhap 2 gia tri");
	scanf("%f%f",&a,&b);
	printf("cong suat su dung dien:%.2f kw\n",c=a/b/1000);
	#define giatien 3500
	#define ngay 24
	#define thang 30
	printf("gia tien 1 thang la :%.2f",c*giatien * ngay *thang);
	return 0;
}
