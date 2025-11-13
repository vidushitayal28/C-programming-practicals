// Recursive functions: Factorial and Fibonacci
#include <stdio.h>

long factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n-1);
}

long fibonacci(int n){
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter n for factorial: ");
    if (scanf("%d",&n) != 1) return 0;
    printf("Factorial(%d) = %ld\n", n, factorial(n));

    printf("Enter index for fibonacci (small n recommended): ");
    if (scanf("%d",&n) != 1) return 0;
    printf("Fibonacci(%d) = %ld\n", n, fibonacci(n));
    return 0;
}
