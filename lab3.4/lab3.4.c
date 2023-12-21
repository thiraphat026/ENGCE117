#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent(children, &group ) ;
    return 0 ;
}//end function

void GetStudent( struct student child[][ 10 ], int *room ) {
    printf("Enter number of classroom : ");
    scanf("%d",room);
    
    for(int i = 0 ; i < *room ; i++){
        printf("Enter number of student %d:\n", i + 1);
        for(int j = 0 ; j < 10 ; j++){
            printf("Enter number of student %d in classroom: %d:\n", j + 1 , i + 1);
            printf("Name: ");
            scanf("%s", child[i][j].name);
            printf("Age: ");
            scanf("%s", &child[i][j].age);
            printf("Sex[M/F]: ");
            scanf("%s", &child[i][j].sex);
            printf("GPA: ");
            scanf("%s", &child[i][j].gpa);
        }
    }
}