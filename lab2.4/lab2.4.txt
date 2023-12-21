#include <stdio.h>

void explode(char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;
    
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = %s\n", i, out[i]);
    }
    printf("count = %d\n", num);
    return 0;
    
}//end function

void explode(char str1[], char splitter, char str2[][10], int *count ){
    *count = 0;
    int i = 0, j = 0;
    
    while(str1[i] != '\0'){
        if(str1[i] != splitter){
            str2[*count][j++] = str1[i];
        }else {
            str2[*count][j] = '\0';
            (*count)++;
            j = 0;
        }
        i++;
    }
    
    if(j > 0){
        str2[*count][j] = '\0';
        (*count)++;
    }
}
