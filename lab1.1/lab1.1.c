#include <stdio.h>
int main() {
    int n = 0;
    int i = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        
    printf("["); 
    printf("%d", i+1);
    printf("]");
    
    printf("Hello world");
    printf("\n");
    }
    return 0;
}