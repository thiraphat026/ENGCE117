#include <stdio.h>
int *GetSet(int *);

int main() {
    int *data, num;
    data = GetSet(&num);
    return 0;
}//end function

int *GetSet(int *num) {
    printf("Enter You Number of Data: ");
    scanf("%d", num);

    int *array = (int *)malloc((*num) * sizeof(int));
    for (int i = 0; i < *num; i++) {
        printf("Enter You Data %d: ", i + 1);
        scanf("%d", &(array[i]));
    }

    printf("You Number of Data : %d\n", *num);
    printf("All Number You Enter : ");
    for (int i = 0; i < *num; i++) {
        printf("%d ", array[i]);
    }

    return array;
}
