// Arrays: mean, variance, sum of positives and negatives
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d",&n) != 1 || n<=0) return 0;
    double arr[n];
    double sum = 0.0;
    int pos_sum = 0, neg_sum = 0;
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
        if (arr[i] > 0) pos_sum += (int)arr[i];
        else if (arr[i] < 0) neg_sum += (int)arr[i];
    }
    double mean = sum / n;
    double var = 0.0;
    for(int i=0;i<n;i++) var += (arr[i]-mean)*(arr[i]-mean);
    var /= n;
    double sd = sqrt(var);

    printf("Mean = %.2f\nVariance = %.2f\nStd Dev = %.2f\n", mean, var, sd);
    printf("Sum of positives = %d\nSum of negatives = %d\n", pos_sum, neg_sum);
    return 0;
}
