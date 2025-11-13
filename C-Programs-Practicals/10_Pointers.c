// Pointers: string sorting by length (simple) and area/circumference using pointers
#include <stdio.h>
#include <string.h>

void swap(char *a[], int i, int j){ char *t = a[i]; a[i] = a[j]; a[j] = t; }

int main(){
    // Part 1: sort strings by length
    char *arr[] = {"apple", "hi", "banana", "cat"};
    int n = 4;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if (strlen(arr[i]) > strlen(arr[j])) swap(arr, i, j);
    printf("Strings sorted by length:\n");
    for(int i=0;i<n;i++) printf("%s\n", arr[i]);

    // Part 2: area and circumference via pointer to radius
    double r;
    printf("Enter radius: ");
    if (scanf("%lf", &r) != 1) return 0;
    double area = 3.141592653589793 * r * r;
    double circ = 2 * 3.141592653589793 * r;
    printf("Area = %.3f\nCircumference = %.3f\n", area, circ);
    return 0;
}
