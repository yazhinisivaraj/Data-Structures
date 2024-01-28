#include<stdio.h>
#include<conio.h>
int main()
{
	int ar[10],i,n,ele;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element found or search");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ar[i]==ele)
		{
			printf("%d found at position %d",ele,i+1);
		}
	}
}
