#include<stdio.h>
int main(){
	int n=0,shu[100][100],min=0,min1=0,temp1,temp2,temp;
	int mint[100],m=0,a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			scanf("%d",&shu[i][j]);
		}
	}
	for(int i=n-1;i>0;i-=2)
	{
		if(i<=2)
		{
			min+=shu[1][1];
		}
		m=0;
		for(int j=1;j<=i;j++)
		{
			temp1=shu[i][j]+shu[i+1][j];
			temp2=shu[i][j]+shu[i+1][j+1];
			if(temp1>temp2)
				mint[m++]=temp2;
			else
				mint[m++]=temp1;
		}
		for(a=0;a<m-1;a++)
		{
			for(b=0;b<m-1-a;b++)
			{
				if(mint[b]>mint[b+1])
				{
					temp=mint[b];
					mint[b]=mint[b+1];
					mint[b+1]=temp;
				}
			}
		}
		min1=mint[0];
		min+=min1;
	}
	printf("%d",min);
	return 0;
}
