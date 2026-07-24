#include<stdio.h>
int main()
{int choice,n;
printf("\n 1vizag");
printf("\n 2hyd");
printf("\n 3kurnool");
printf("\n 4kkd\n");
printf("enter your choice");
scanf("%d",&choice);
printf("\n enter no.of tickets");
scanf("%d",&n);
switch(choice){ 
    case 1:
	printf("your destination is vizag\n");
	printf("enter no.of tickets is = %d\n",n);
	printf("total amount is = %d\n ",n*60);
	break;
	case2:
	printf("your destination is hyd");
	printf("enter no.of tickets is = %d",n);
	printf("total amount is = %d ",n*60);
	break;
	case 3:
	printf("your destination is kurnool");
	printf("enter no.of tickets is = %d",n);
	printf("total amount is = %d ",n*60);
	break;
	case 4:
	printf("your destination is kkd");
	printf("enter no.of tickets is = %d",n);
	printf("total amount is = %d ",n*60);
	break;
	
}
return 0;
}
