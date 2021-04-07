#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c;
    printf("\nNhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
 
    // Tìm max theo C1
    float maxValue = a;
 
    if(b > maxValue){
        maxValue = b;
    }
 
    if(c > maxValue){
        maxValue = c;
    }
    printf ("Vay so lon nhat trong 3 so là %f",maxValue);
	return 0;
}
