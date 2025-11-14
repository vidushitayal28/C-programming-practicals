// Looping and Branching: simple menu with switch-case, quadratic solver, and digit sum
//VIDUSHI TAYAL 25070521075
#include <stdio.h>
#include <math.h>

int sum_of_digits(int n){
    int s = 0;
    if (n < 0) n = -n;
    while(n){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main(){
    int choice;
    printf("Choose: 1) Quadratic roots  2) Sum of digits  3) Print 1..n using loop\nEnter choice: ");
    if (scanf("%d", &choice) != 1) return 0;

    switch(choice){
        case 1: {
            double a,b,c;
            printf("Enter a b c: ");
            if (scanf("%lf %lf %lf",&a,&b,&c) != 3) return 0;
            double D = b*b - 4*a*c;
            if (D >= 0){
                double r1 = (-b + sqrt(D)) / (2*a);
                double r2 = (-b - sqrt(D)) / (2*a);
                printf("Real roots: %g and %g\n", r1, r2);
            } else {
                printf("Complex roots\n");
            }
            break;
        }
        case 2: {
            int n;
            printf("Enter integer: ");
            if (scanf("%d",&n) != 1) return 0;
            printf("Sum of digits = %d\n", sum_of_digits(n));
            break;
        }
        case 3: {
            int n;
            printf("Enter n: ");
            if (scanf("%d",&n) != 1) return 0;
            for(int i=1;i<=n;i++) printf("%d ", i);
            printf("\n");
            break;
        }
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
