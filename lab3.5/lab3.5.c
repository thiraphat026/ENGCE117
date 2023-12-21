#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student (*GetStudent( int *room ) )[ 10 ] ;

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
   return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ]  {
    static struct student students[20][10];
    printf("Enter number of classroom : ");
    scanf("%d",room);
    
    for(int i = 0 ; i < *room ; i++){
        printf("Enter number of student %d:\n", i + 1);
        for(int j = 0 ; j < 10 ; j++){
            printf("Enter number of student %d in classroom: %d:\n", j + 1 , i + 1);
            printf("Name: ");
            scanf("%s", students[i][j].name);
            printf("Age: ");
            scanf("%s", &students[i][j].age);
            printf("Sex[M/F]: ");
            scanf("%s", &students[i][j].sex);
            printf("GPA: ");
            scanf("%s", &students[i][j].gpa);
        }
    }
    return students;
}