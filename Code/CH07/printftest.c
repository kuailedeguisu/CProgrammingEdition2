#include <stdio.h>

int main()
{
    printf("%c\n", 'a'); // a
    char *str = "Hello World";
    char *dest;
    printf("%.*s\n", 5, str);  // Hello
    printf("%10s\n", str);     // Hello World
    printf("%.10s\n", str);    // Hello Worl
    printf("%-10s\n", str);    // Hello World
    printf("%.15s\n", str);    // Hello World
    printf("%-15s\n", str);    // Hello World
    printf("%15.10s\n", str);  //           Hello Worl
    printf("%-15.10s\n", str); // Hello Worl
    sprintf(dest, "%s\n", str);// Hello World
    printf("%s\n", dest);      // " "
    return 0;
}