#include<stdio.h>
#include<limits.h>

int main(){
	int v = -20;
	int mask = v >> ((int)(sizeof(int) * CHAR_BIT)-1);
	unsigned int result = ((unsigned int)(v) ^ mask)-mask;
	printf("%d", result);
	return 0;
}
