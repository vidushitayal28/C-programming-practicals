// Demonstrate Arithmetic, Logical, Relational, and Conditional Operators
//VIDUSHI TAYAL 25070521075
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    printf("Arithmetic: %d + %d = %d\n", a, b, a + b);
    printf("Arithmetic: %d - %d = %d\n", a, b, a - b);
    printf("Arithmetic: %d * %d = %d\n", a, b, a * b);
    if (b != 0) printf("Arithmetic: %d / %d = %d (integer div)\n", a, b, a / b);

   
    printf("Relational: a == b -> %d\n", a == b);
    printf("Relational: a != b -> %d\n", a != b);
    printf("Relational: a > b -> %d\n", a > b);

    
    printf("Logical: (a>0 && b>0) -> %d\n", (a>0 && b>0));
    printf("Logical: (a>0 || b>0) -> %d\n", (a>0 || b>0));


    int max = (a > b) ? a : b;
    printf("Conditional (ternary): max = %d\n", max);

    return 0;
}
