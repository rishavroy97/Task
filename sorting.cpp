#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(j!=9)
			if(a[j]>a[j+1])
			{
			int temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
			}
		}
	}
	for(int i=0; i<10; i++)
	printf("  %d",a[i];
}
//rishav 106116071
