#include <stdio.h>
#include <string.h>

struct personalData{
    char name[50];
    int age;
    char ID[50];
    char school[50];
};
int main(){

    struct personalData person1;
    printf("Enter Name: ");
    scanf("%s", &person1.name);

    printf("Enter Age: ");
    scanf("%d", &person1.age);

    printf("Enter ID Number: ");
    scanf("%s",&person1.ID);

    printf("Enter School: ");
    scanf("%s",&person1.school);

    printf("\nMY DATA\n");
    printf("Name: %s\n",person1.name);
    printf("Age: %d\n",person1.age);
    printf("ID Number: %s\n",person1.ID);
    printf("School: %s\n",person1.school);

    return 0;
}
