#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("Nhap vao 2 so nguyen:");
	scanf("%f%f",&a,&b);
	printf("%.2f", a/b);
	return 0;
}
