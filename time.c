#include<stdio.h>
struct TimeDB{
int hr;
int min;
int sec;
}time[2];
int main()
{
for(int i=0;i<2;i++)
{
printf("Enter data for Time %d : ",i+1);
scanf("%d:%d:%d",&time[i].hr,&time[i].min,&time[i].sec);
}
int hrsum=time[0].hr+time[1].hr;
int minsum = time[0].min+time[1].min;
int secsum = time[0].sec+time[1].sec;
if(secsum>=60)
{
minsum = minsum+(secsum/60);
secsum = secsum%60;
if(minsum>=60)
{
hrsum = hrsum + (minsum/60);
minsum = (minsum%60);
}
}
printf("\nThe total time is : %d:%d:%d\n",hrsum,minsum,secsum);
}
