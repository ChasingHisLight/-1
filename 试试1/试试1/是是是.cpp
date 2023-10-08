#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void MAX(int a, int b, int c,int *d){
	if (a > b && a > c)
		*d = a;
	else if (c > a && c > b)
	 *d = c;
	else if (b > a && b > c)
	 *d = b;
	else
	 *d=a;
}
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 0;
	printf("输入三个数以求最小值,空格分开\n\n");
	scanf("%d %d %d", &a, &b, &c);
	MAX(a, b, c,&d);
	printf("max = %d\n", d);
	return 0;
}

