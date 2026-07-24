#include<stdio.h>
int main()
{int units;
float amount,charges,totalamount;
printf("\nenter no.of units");
scanf("%d",&units);
if(units<=50)
{amount=units*2.50;
	charges=25;
}
else if(units<=100)
{amount=units*3;
charges=50;
}
else if(units<=200)
{amount=units*3.50;
charges=75;
}
else if(units<=300)
{amount=units*4;
charges=100;
}
else
{amount=units*5;
charges=125;
}
	totalamount=amount+charges;
printf("%d",totalamount);
return 0;
}
