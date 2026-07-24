#include<stdio.h>
struct demo{
	unsigned int hours:5;
	unsigned int minutes:6;
	unsigned int seconds:6;
	int h,m,s;
};
int main(){
	struct demo s;
	unsigned int h,m,s;

	printf("enter hours minutes seconds");
	scanf("%d%d%d",&h,&m,&s);
		s.hours=h;
	s.minutes=m;
	s.seconds=s;
	printf("time is %d:%d:%d",s.hours,s.minutes,s.seconds);
	return 0;
}
