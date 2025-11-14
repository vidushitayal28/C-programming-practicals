// Structures: Distance addition and simple CGPA calculation
//VIDUSHI TAYAL 25070521075
#include <stdio.h>

struct Distance {
    int km;
    int m; // meters
};

struct Student {
    char name[50];
    int marks[5];
};

struct Distance add_dist(struct Distance a, struct Distance b){
    struct Distance r;
    r.m = a.m + b.m;
    r.km = a.km + b.km + r.m/1000;
    r.m = r.m % 1000;
    return r;
}

int main(){
    struct Distance d1, d2;
    printf("Enter distance1 km meters: ");
    if (scanf("%d %d",&d1.km, &d1.m) != 2) return 0;
    printf("Enter distance2 km meters: ");
    if (scanf("%d %d",&d2.km, &d2.m) != 2) return 0;
    struct Distance sum = add_dist(d1,d2);
    printf("Sum = %d km %d m\n", sum.km, sum.m);

    // CGPA for 5 subjects out of 100, simple average scaled to 10
    struct Student s;
    printf("Enter student name (no spaces): ");
    if (scanf("%s", s.name) != 1) return 0;
    int total = 0;
    for(int i=0;i<5;i++){
        printf("Enter marks subject %d: ", i+1);
        if (scanf("%d", &s.marks[i]) != 1) return 0;
        total += s.marks[i];
    }
    double cgpa = (total / 5.0) / 10.0; // scale 0-100 to 0-10
    printf("CGPA of %s = %.2f\n", s.name, cgpa);
    return 0;
}
