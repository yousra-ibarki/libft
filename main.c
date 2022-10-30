#include <stdio.h>
#include <math.h>
#include <string.h>


int toDec(char *str)
{
	int res = 0;
	int len = strlen(str) - 1;
	while (*str)
	{
		res += pow(2, len) * (*str - '0');
		len--;
 		str++;
	}
	return res;
}
int main()
{
	char *str = "10000001";
	printf("The value of %s\n",  str, singed_bin(str));
}
