#include<stdio.h>
int main()
{
	int i,t,y,z,n=0,m[12]={0};
	int a[13]={0,13,44,73,104,134,165,195,226,257,287,318,348}; 
	int b[13]={0,13,44,72,103,133,164,194,225,256,286,317,347};
	printf("输入目标年份：");
	scanf("%d",&y);
	z=y-1;
	for(i=1;i<13;i++)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			t=z*365+(z/4)-(z/100)+(z/400)+a[i];
			if(t%7==5)
			{
				printf("%d年%d月13日是黑色星期五\n",y,i);
			}
		}
		else
		{
			t=z*365+(z/4)-(z/100)+(z/400)+b[i];
			if(t%7==5)
			{
				printf("%d年%d月13日是黑色星期五\n",y,i);
			}
		}
	} 
	return 0;
}
