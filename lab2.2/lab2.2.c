#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function

char* reverse( char str1[]) {
    int i = 0;
    int j = strlen(str1) -1;
    char str2;
    while(i < j)
    {
        str2 = str1[i];
        str1[i] = str1[j];
        str1[j] = str2;
        i++;
        j--;
    }
    printf("\n\nReverse : %s\n\n", str1);
    return (0);
}