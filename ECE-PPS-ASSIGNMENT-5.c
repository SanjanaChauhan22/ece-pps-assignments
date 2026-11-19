#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    do {
        printf("\n---Menu ---\n");
        printf("1. strlen (Length)\n");
        printf("2. strcpy (Copy)\n");
        printf("3. strcat (Concatenate)\n");
        printf("4. strcmp (Compare)\n");
        printf("5. strrev (Reverse)\n");
        printf("6. strlwr (Lowercase)\n");
        printf("7. strupr(Uppercase)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("Length of str1 = %lu\n", strlen(str1));
            break;
        case 2:
            strcpy(str2, str1);
            printf("After copy str2 = %s\n", str2);
            break;    
        case 3:
            printf("After concat = %s\n", strcat(str1, str2));
            break;
        case 4:
            if(strcmp(str1, str2)==0)
            printf("Strings are equal\n");
            else 
            printf("String are not equal\n");
            break;
        case 5:
            printf("Reverse of str1 = %s\n", strrev(str1));    
            break;
        case 6:
            printf("Lowercase = %s\n", strlwr(str1));
            break;
        case 7:
            printf("Uppercase = %s\n", strupr(str1));
            break; 
        case 8:
            return 0;            
        default:
             printf("Invalid choice!\n");
        }
    } while(choice!= 8);

    return 0;
}