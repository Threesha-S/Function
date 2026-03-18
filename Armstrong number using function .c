#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int isArmstrong(int n) {
    int sum = 0,temp = n;
    int digits = countDigits(n);
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    scanf("%d",&n);
    if (isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}