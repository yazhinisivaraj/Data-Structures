#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[10]="abi";
	char ch2[20]="abi";
	int res;
	res=strcmp(ch1,ch2);
	printf("%d",res);
	res=strcmp(ch1,ch2);
	printf("%d",res);
	return 0;
}
