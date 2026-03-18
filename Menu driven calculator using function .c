#include <stdio.h>

float add(float a,float b) { return a + b; }
float sub(float a,float b) { return a - b; }
float mul(float a,float b) { return a * b; }
float divi(float a,float b) { return a / b; }
int main() {
    float a,b;
    char op;
    scanf("%f%f%c",&a,&b,&op);
    switch (op) {
        case '+': printf("%.2f",add(a,b));break;
        case '-': printf("%.2f",sub(a,b));break;
        case '*': printf("%.2f",mul(a,b));break;
        case '/': printf("%.2f",divi(a,b));break;
        default: printf("Invalid");
    }
    return 0;
}