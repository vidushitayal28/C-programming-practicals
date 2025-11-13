// Unions: usage and display of union variables
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(){
    union Data d;
    d.i = 10;
    printf("After setting int: i = %d, f = %f, str = %s\n", d.i, d.f, d.str);
    d.f = 3.14;
    printf("After setting float: i = %d, f = %f, str = %s\n", d.i, d.f, d.str);
    strcpy(d.str, "hello");
    printf("After setting str: i = %d, f = %f, str = %s\n", d.i, d.f, d.str);
    return 0;
}
