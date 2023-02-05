#include<stdio.h>
void main()
{
  printf("The following program is to find the sum of all the odd and even numbers present between 1 to n:-\n\n");
  int num,oddsum=0,evensum=0;
  printf("Enter a number :-");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
    if(i%2==0)
    {
      evensum=evensum+i;
    }
    else
    {
      oddsum=oddsum+i;
    }
  }
  printf("\nThe sum of all the even numbers present between 1 to %d is :- %d",num,evensum);
  printf("\nThe sum of all the odd numbers present between 1 to %d is :- %d",num,oddsum);

}
