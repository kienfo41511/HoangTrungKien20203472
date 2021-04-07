#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,d,c,e;
	printf("Nhap so giay:");
	scanf("%d",&a);
	b=a/3600;
	c=a%3600;
	d=c/60;
	e=c%60;
	printf("%d gio %d phut %d giay", b,d,e);
	return 0;
}
