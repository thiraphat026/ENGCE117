#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}

int GetSet(int a[]){
    printf("Enter You Number of Data : ");
    scanf("%d" , &a[0]);

    for (int i = 1; i <= a[0]; i++)
    {
        printf ("Enter You Data [%d] : " , i );
        scanf("%d" , &a[i]);
    }

    printf("You Number of Data : %d\n" , a[0]);
    printf("All Number You Enter : ");
        for (int i = 1; i <= a[0]; i++)
        {
            printf("| %d |" , a[i]);
        }
        
    return a;
}