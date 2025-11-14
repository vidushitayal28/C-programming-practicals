// String operations using user-defined functions: simple strlen and strcat
//VIDUSHI TAYAL 25070521075
#include <stdio.h>

int my_strlen(const char *s){
    int n = 0;
    while(s && s[n]) n++;
    return n;
}

void my_strcat(char *dest, const char *src){
    int i = 0, j = 0;
    while(dest[i]) i++;
    while(src && src[j]) {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main(){
    char s1[200], s2[100];
    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    s1[strcspn(s1, "\n")] = 0;
    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    s2[strcspn(s2, "\n")] = 0;

    printf("Length of first = %d\n", my_strlen(s1));
    my_strcat(s1, s2);
    printf("After concatenation: %s\n", s1);
    return 0;
}
