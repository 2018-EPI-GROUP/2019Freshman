#include<stdio.h>
float max(float x,float y)
{
	if(x>y) 
	return x;
	else 
	return y;
 } 
 main()
 {
 	float m,a[10]={12.3,105,34.5,50,67,9,78,98,89,-20};
 	int k;
 	m=a[0];
 	for(k=1;k<10;k++)
 	m=max(m,a[k]);
 	printf("%.2f\n",m);
 }
