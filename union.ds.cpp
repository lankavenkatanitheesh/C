#include<stdio.h>
union student
{
	int roll;
	char grade;
	float marks;
	
};

int main()
{

union student s;
s.roll=101;
s.grade='a';
s.marks=98.6;

printf("\n size of s is %d",sizeof(s));
printf("\n student roll number is %d",s.roll);
printf("\n student grade is %c",s.grade);
printf("\n student marks is %f",s.marks);

return 0;
}
