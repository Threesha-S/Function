#include <stdio.h>

float areaCircle(int r){
    return 3.14 * r * r;
}
int main(){
    int R;
    scanf("%d",&R);
    printf("%.2f", areaCircle(R));

    return 0;
}