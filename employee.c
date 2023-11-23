#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct EmployeeDB{
  float bp;
  char name[100];
  char dep[100];
  char des[100];
  char gen;
};
int main()
{
  int n;
  float gp,hr,da;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  struct EmployeeDB *emp = (struct EmployeeDB *)malloc(n * sizeof(struct EmployeeDB));
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter the details of Employee %d:\n", i + 1);
    printf("Enter the Name : ");
    scanf(" %[^\n]s", (*(emp+i)).name);
    printf("Enter the Gender : ");
    scanf(" %c", &((*(emp+i)).gen));
    printf("Enter the Designation : ");
    scanf(" %[^\n]s", (*(emp+i)).des);
    printf("Enter the Department : ");
    scanf(" %[^\n]s", (*(emp+i)).dep);
    printf("Enter the Basic Pay");
    scanf("%f", &((*(emp+i)).bp));
  }
  
  for (int i = 0; i < n; i++)
  {
    printf("\nDetails of Employee %d :\n", i + 1);
    printf("Name : %s\n", (*(emp + i)).name);
    printf("Gender : %c\n", (*(emp + i)).gen);
    printf("Designation : %s\n", (*(emp + i)).des);
    printf("Department : %s\n", (*(emp + i)).dep);
    printf("Basic Pay : %0.2f\n", (*(emp + i)).bp);
    hr = 0.25 *((*(emp+i)).bp);
    da = 0.75 *((*(emp+i)).bp);
    gp = ((*(emp+i)).bp) + hr + da ;
    printf("Gross pay of the employee is : %.2f\n",gp);
  }
}
