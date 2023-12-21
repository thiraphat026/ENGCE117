#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
}//end function

void reverse( char str1[], char str2[] ){
    int i = 0;
    int j = strlen(str1) -1;
    
    while(i < j)
    {
        str2[50] = str1[i];
        str1[i] = str1[j];
        str1[j] = str2[50];
        i++;
        j--;
    }
    printf("\n\nReverse : %s\n\n", str1);
    return (0);
}