#include<stdio.h>
struct StudentDB{
char name[20];
int rollno;
float marks[5];
}student1;
int main()
{
struct StudentDB *ptr;
printf("Enter the name of the student : ");
scanf("%[^\n]s",student1.name);
printf("Enter the roll number of the student : ");
scanf("%d",&student1.rollno);
printf("Enter the marks of the student : \n");
for(int i=0;i<5;i++)
{
printf("Subject %d : ",i+1);
scanf("%f",&student1.marks[i]);
}
ptr=&student1;
printf("\nData stored to the database is : \n\n");
printf("Name of the student is : %s\n",ptr->name);
printf("Roll no of the student is : %d\n",ptr->rollno);
printf("The marks of the student are : \n");
for(int i=0;i<5;i++)
{
printf("Subject %d : %.1f\n",i+1,ptr->marks[i]);
}
}
