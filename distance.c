#include<stdio.h>
struct Distance{
int km;
int m;
}dist[2];
int main()
{
for(int i=0;i<2;i++)
{
printf("Enter data for distance %d : \n",i+1);
printf("Enter km : ");
scanf("%d",&dist[i].km);
printf("Enter m : ");
scanf("%d",&dist[i].m);
printf("\n");
}
int kmsum,msum;
kmsum=dist[0].km+dist[1].km;
msum=dist[0].m+dist[1].m;
if(msum>=1000)
{
kmsum = kmsum + (msum/1000);
msum=msum%1000;
}
printf("The total distance is : %d km %d m\n",kmsum,msum);
}
