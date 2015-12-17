// maoPao.c
#include "stdio.h"
int main()
{
	int a[10],i,j,n,num;
	scanf ("%d",&n);
	for (i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	
	for (i = 1; i <= n-1; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			if(a[j]>a[j+1])
			{
				num=a[j];a[j]=a[j+1];a[j+1]=num;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	getchar();getchar();
	return 0;
}
