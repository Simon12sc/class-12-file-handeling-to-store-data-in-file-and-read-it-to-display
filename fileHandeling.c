#include <stdio.h>

int main() {
  int n;
  printf("enter the no. of student that you want : ");
  scanf("%d",&n);


  struct student{
  char name[50];
  int roll_no;
  int marks;
  }s[n];
  FILE *fp=fopen("student.txt","a");
  
  for(int i=0;i<n;i++){
    printf("Student no %d:\n",i+1);
    printf("Name: ");
    scanf("%s",s[i].name);
    printf("Roll no: ");
    scanf("%d",&s[i].roll_no);
    printf("Marks: ");
    scanf("%d",&s[i].marks);
    printf("\n");
    fprintf(fp,"\n%s\t%d\t%d",s[i].name,s[i].roll_no,s[i].marks);
  }
fclose(fp);
   printf("\nName\tRoll no\t\tmarks");
FILE *fp1=fopen("student.txt","r");
  char name[50];
  int roll_no;
  int marks;
  while(fscanf(fp1,"\n%s\t%d\t%d",name,&roll_no,&marks)!=EOF){
    printf("\n%s\t\t%d\t\t%d",name,roll_no,marks);
    }

  fclose(fp1);


  
    return 0;
}
  
