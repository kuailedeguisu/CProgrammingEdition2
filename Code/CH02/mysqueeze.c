#include <stdio.h>

void mysqueeze(char s[], int c);

main()
{
    char s[100] = "abcabcaaagggc";
    int c = 'a';
    mysqueeze(s, c);
    printf("%s\n", s);
    return 0;
}

void mysqueeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; ++i)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}