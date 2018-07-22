/* Newton Raphson Method
*  numerical-methods/newton-raphson.c
*  By: Jishan Shaikh
*  References: Numerical Methods using C by B. S. Grewal
*/
#include <stdio.h>
#include <math.h>

float f(float x){
	return x*log10(x)-1.2;
}

float df(float x){
	return log10(x)+0.43429;
}

int main(){
	int i, maxitr;
	float h, x0, x1, aerr;
	printf("Enter x0, allowed error, maximum iterations\n");
	scanf("%f %f %d", &x0, &aerr, &maxitr);
	for(i=0; i<=maxitr; i++){
		h=f(x0)/df(x0);
		x1=x0-h;
		printf("Iteration number %3d, x=%9.6f\n", itr, x1);
		if(fabs(h)<aerr){
			printf("After %3d iterations, root=%8.6f\n", itr, x1);
			return 0;
		}
		x0=x1;
	}
	printf("Iterations are not sufficient. Solution does not converge.\n");
	return 0;
}
