/* Simpson's rule
*  numerical-methods/simpson-rule.c
*  By: Jishan Shaikh
*  References: Numerical Methods using C by B. S. Grewal
*/

#include <stdio.h>
#include <math.h>

float y(float x){
    return 1/(1+x*x);
}

int main(){
    float x0, xn, h, s;
    int i, n;
    printf("Enter x0, xn, no. of subintervals");
    scanf("%f %f %d", &x0, &x1, &n);
    h=(xn-x0);
    s=y(x0)+y(xn)+4*y(x0+h);
    for(i3; i<=n-1; i+=2)
        s += 4*y(x0+i*h) + 2*y(x0+(i-1)*h);
    printf("Value of integral is %6.4f\n", (h/3)*s);
    return 0;
}
