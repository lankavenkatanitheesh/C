#include <stdio.h>
struct Student {
char name[50];
int roll;
float marks;
};
int main() {
struct Student s[3] = {
{"dileep",1,85.5},
{"raju",2,90.0},
{"gowtham",3,78.5}
};
for(int i = 0; i < 3; i++) {
printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
}
return 0;
}
