#include <stdio.h>
int main()
{
    char alphabet;
    do
    {
        printf("Enter the alphabet: ");
        scanf("%c", &alphabet);
        switch (alphabet)
        {
        case 'a':

            printf("Vowel\n");
            break;

        case 'e':

            printf("Vowel\n");
            break;

        case 'i':

            printf("Vowel\n");
            break;

        case 'o':

            printf("Vowel\n");
            break;

        case 'u':

            printf("Vowel\n");
            break;

        case 'A':

            printf("Vowel\n");
            break;

        case 'E':

            printf("Vowel\n");
            break;

        case 'I':

            printf("Vowel\n");
            break;

        case 'O':

            printf("Vowel\n");
            break;

        case 'U':

            printf("Vowel\n");
            break;

        case '1':

            printf("Exit\n");
            break;

        default:

            printf("Consonant\n");
            break;
        }
    } while (alphabet != '1');
    return 0;
}