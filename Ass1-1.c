#include<stdio.h>
void main()
{
   char name[50],branch[50],hobbies[50];
   int regd;
   printf("Enter the name  ");
   fgets(name,sizeof(name),stdin);
   
   printf("Enter the  branch  ");
   fgets(branch,sizeof(branch),stdin);
   printf("Enter the hobbies  ");
   fgets(hobbies,sizeof(hobbies),stdin);
   printf("Enter the  registration number ");
   scanf("%d",&regd);
printf("Your Name is %s Your branch is %s Your hobbies is %s and Your registration number is %d",name,branch,hobbies,regd);
}