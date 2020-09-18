#include <stdio.h>                                 
#include <math.h>                                       
float alg(int x, int y, int  z) {
    float ans;
    ans = (pow(3, x) - (y - 2) * (y - 2)) / z;
    return (ans);

}
int main() {
    int x, y, z;
    float ans;
    scanf_s("%d%d%d", &x, &y, &z);
    ans = alg(x, y, z);
    printf("%f", ans);
    return 0;
}