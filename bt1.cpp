#include<stdio.h>
#include<string.h>
int main(){
	int a = 10;
	int *ptr = &a;
	printf("gia tri: %d\n",a);
	printf("dia chi: %p\n",&a);
	printf("gia tri:%d\n",*ptr);
	printf("dia chi: %p\n",ptr);
	return 0;
}
