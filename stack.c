#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void show();
int main()
{
int choice,values,top,n,i;
while(1){
printf("stack operations :");
printf("\n1.push\n2.pop\n3.show\n4.Exit\n");
printf("Enter your choice");
scanf("%d",&choice);
printf("Enter the number");
scanf("%d",&n);
switch(choice)
{
case1:
   push();
   break;
case2:
   pop();
   break;
case3:
    show();
    break;
case4:
   Exit(0);
printf("do you want to continue(0/1)");
}
}
}
void push()
{
int top,null,n;
if(top==1)
    top++;
  printf("The pushed element is",&n);
}
void pop()
{
int top,null,n;
   top==null;
    top--;
    printf("The poped element is",&n);
    }
void show()
{
printf("The pushed elements are:");
printf("the popped elements are:");
printf("do yo want to continue(0/1 ?");
}
getch();











