#include <stdio.h>
#include <string.h>
#include <ctype.h>

// strlwr and strupr are not in standard C library
char* strlwr(char *str)
{
    unsigned char *p = (unsigned char *)str;
    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }
    return str;
}

char* strupr(char *str)
{
    unsigned char *p = (unsigned char *)str;
    while (*p) {
        *p = toupper((unsigned char)*p);
        p++;
    }
    return str;
}

int main (){

    unsigned char string1[] = "Marcus";
    char string2[] = "DevOps";
    int n = 4;

    //strlwr(string1);                  // converts a string to lowercase
    //strupr(string1);                  // converts a string to uppercase
    //strcat(string1, string2);         // appends a string2 to end of string1
    //strncat(string1, string2, n);     // appends n chars of string2 to string1
    //strcpy(string1, string2);         // copy string2 to string1
    //strncpy(string1, string2, n);     // copy n chars of string2 to string1

    printf("%s\n", string1);

    return 0;

}