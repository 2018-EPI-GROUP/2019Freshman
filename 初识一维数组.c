#include <stdio.h>
#include <stdlib.h>
//2.一维数组简单练习
#define n 7
int main()
{
    int i,x;
    int a[n]={8,4,21,23,344,12};
    double sum = 0,aver = 0;
    for(i=0;i<n;i++)
        sum += a[i];
    aver = sum/n;
    printf("该班学生平均成绩为:%.2lf\n",sum);
    printf("该班学生平均成绩为:%.2lf\n",aver);
    printf("请随机输入一个数:\n");//随机输入一个数判断该数列是否存在此数;
    scanf("%d",&x);
    //个人理解
     /*for(i=0;i<n;i++)
        //如果有相同的数,则提示输入正确跳出循环,结束;
        //否则继续循环
        {
            if(x ==a[i] )
            {
                printf("恭喜你,这个数列里有这个数字。");
                break ;
            }
            if(x != a[i])//如果输出错入,且不是与最后一个元素不相等则继续循环,如果与所有元素不相等则提示输入错误退出循环;
              if (i== n-1)
              {
                printf("输入错误!");
                break ;
              }
        }*/
        //课程给出方法
    //穷举法
    for(i=0;i<n;i++)
    {
        if(x==a[i])
          {

           printf("数列里有这个数字哦!");
           break ;
          }
    }
    if(i==7)
        printf("很遗憾,数列里没有这个数字！");
   return 0;
}
