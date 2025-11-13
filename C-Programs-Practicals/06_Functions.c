// Simple functions: Simple Interest, Prime check, Armstrong check (menu)
#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if (n <= 1) return 0;
    for(int i=2;i*i<=n;i++) if (n % i == 0) return 0;
    return 1;
}

int is_armstrong(int n){
    int orig = n, sum = 0;
    while(n){
        int d = n%10;
        sum += d*d*d;
        n /= 10;
    }
    return sum == orig;
}

double simple_interest(double p, double r, double t){
    return (p * r * t) / 100.0;
}

int main(){
    int choice;
    printf("1) Simple Interest  2) Prime check  3) Armstrong check\nChoose: ");
    if (scanf("%d",&choice) != 1) return 0;
    if (choice == 1){
        double p,r,t;
        printf("Enter P R T: ");
        if (scanf("%lf %lf %lf",&p,&r,&t) != 3) return 0;
        printf("Simple Interest = %.2f\n", simple_interest(p,r,t));
    } else if (choice == 2){
        int n; printf("Enter n: "); if (scanf("%d",&n) != 1) return 0;
        printf("%d is %s\n", n, is_prime(n) ? "Prime" : "Not Prime");
    } else if (choice == 3){
        int n; printf("Enter 3-digit number: "); if (scanf("%d",&n) != 1) return 0;
        printf("%d is %sArmstrong number\n", n, is_armstrong(n) ? "" : "not ");
    } else printf("Invalid choice\n");
    return 0;
}
