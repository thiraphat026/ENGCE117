#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}//end function

void GetSet(int array[], int *num) {
    printf("Enter You Number of Data: ");
    scanf("%d", num);

    for (int i = 0; i < *num; i++) {
        printf("Enter You Data %d: ", i + 1);
        scanf("%d", &(array[i]));
    }

    printf("You Number of Data : %d\n", *num);
    printf("All Number You Enter : ");
    for (int i = 0; i < *num; i++) {
        printf("%d ", array[i]);
    }
}