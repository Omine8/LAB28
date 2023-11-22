#include<stdio.h>
struct StudentDB{
char name[20];
int rollno;
float marks[5];
char gen;
float total[5];
};
int main()
{
int n,sn;
printf("Enter the number of students : ");
scanf("%d",&n);
float sum=0;
struct StudentDB std[n];
for(int i=0;i<n;i++)
{
printf("Enter the Data for Student %d : \n",i+1);
printf("Enter the roll number of the Student %d: ",i+1);
scanf("%d",&std[i].rollno);
printf("Enter the name of Student %d: ",i+1);
scanf(" %[^\n]s ",std[i].name);
printf("Enter the gender of Student %d[M/F]: ",i+1);
scanf(" %c",&std[i].gen);
printf("Enter the marks of Student %d: \n",i+1);
for(int j=0;j<5;j++)
{
printf("Subject %d : ",j+1);
scanf("%f",&std[i].marks[j]);
}
for(int k=0;k<5;k++)
{
sum = sum + std[i].marks[k];
}
std[i].total[i]=sum;
sum=0;
printf("\n");
}
printf("Enter subject number for its failed list to be displayed : ");
scanf("%d",&sn);
int fail=0;
for(int i=0;i<n;i++)
{
if(std[i].marks[n-1]<40)
{
fail++;
}
}
printf("\nStudents' Datas stored in the Data Base are : \n\n");
printf("ROLL NUMBER\t\tNAME\t\tGENDER\tSUBJECT 1\tSUBJECT 2\tSUBJECT 3\tSUBJECT 4\tSUBJECT 5\tTOTAL\n\n");
for(int i=0;i<n;i++)
{
printf("%d \t\t%s \t\t %c \t",std[i].rollno,std[i].name,std[i].gen);
for(int j=0;j<5;j++)
{
printf("\t%.1f\t",std[i].marks[j]);
}
printf(" %.1f \t\n",std[i].total[i]);
}
printf("List of students failed in subject %d is : %d\n",sn,fail);
}
