// String operations using built-in functions: strcat, strcpy, strcmp
//VIDUSHI TAYAL 25070521075
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100], s2[100];
    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    
    s1[strcspn(s1, "\n")] = 0;
    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    s2[strcspn(s2, "\n")] = 0;

    char copy[100];
    strcpy(copy, s1);
    printf("Copied string: %s\n", copy);

    char concat[200];
    strcpy(concat, s1);
    strcat(concat, s2);
    printf("Concatenated: %s\n", concat);

    int cmp = strcmp(s1, s2);
    if (cmp == 0) printf("Strings are equal\n");
    else if (cmp < 0) printf("First is less than second\n");
    else printf("First is greater than second\n");

    return 0;
}
