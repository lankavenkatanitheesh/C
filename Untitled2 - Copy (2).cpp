#include<stdio.h>
int main()
{ 
int n,count,i,j;
printf("\n enter the n vlaue");
scanf("%d",&n);
for(i=2;i<=n;i++)
{ count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}
}
if(count==2){
printf("\n %d is prime number");
}
else{
printf("\n %d is not prime number");}
return 0;
}
