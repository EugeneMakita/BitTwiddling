#include<stdio.h>
#include<limits.h>

int main(){
	int v = 200;
	int sign;
	printf("size of %lu\n",sizeof(int)*(CHAR_BIT-1));
	int shift  = (int)(sizeof(int)*(CHAR_BIT)-1);
	printf("size of shift: %d\n",shift);
	int result = +1 | v >> shift;
	printf("sound: %d\n",result);
	return 0;
}
