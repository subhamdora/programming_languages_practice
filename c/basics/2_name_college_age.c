#include <stdio.h>
 int main(){
    char name[50],collegeName[100];
    int age;

    printf("Enter your Name: ");
    scanf("%s",&name);

    printf("Enter your Age: ");
    scanf("%d",&age);

    printf("Enter your College Name: ");
    scanf ("%s",&collegeName);

    printf("------- Student Details -------\n");
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("College Name: %s",collegeName);

    return 0;
}
