#include <stdio.h>
#include <ctype.h>

int main ()
{

    char ch;

    printf("\n Enter a character:");
    scanf ("%c",&ch);

    if(isdigit(ch))
        printf ("%c is a digit",ch);
    else if(isupper(ch))
    printf ("%c is a upper case",ch);

    else if(ispunct(ch))
    printf ("%c is a punctuation mark",ch);

    return 0;

}
