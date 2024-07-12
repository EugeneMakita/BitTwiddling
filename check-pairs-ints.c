#include<stdio.h>
#include<limits.h>

int main(){
	int a = 1;
	int b = 1;
	int result = 1|(a^b) >> ((int)(sizeof(int) * CHAR_BIT)-1);
	printf("%d", result);
	return 0;
}
