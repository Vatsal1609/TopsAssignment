#include <stdio.h>
int main()
{
    char str[200];                                    //character array
    int i, vowels, consonants, digits, space,special;  

    vowels =  consonants = digits =  space= special = 0;

    printf("Enter a line of string: ");
    gets(str);                                      //reading string

    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            ++digits;
        }
        else if (str[i]==' ')
        {
            ++space;
        }
        else{
            ++special;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nspace: %d", space);
    printf("\nspecial: %d", special);

    return 0;
    
}
