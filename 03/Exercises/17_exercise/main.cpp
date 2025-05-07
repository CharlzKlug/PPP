#include "../../../PPP.h"

int solve_quadratic(double, double, double, double*, double*);
int main() {
    double x1, x2;
    if (solve_quadratic(2, 4, -1, &x1, &x2) >= 0) {
	cout << "x1 = " << x1 << '\n';
	cout << "x2 = " << x2 << '\n';
    } else {
	cout << "There is no solutions.\n";
    }
    return (0);
}

int solve_quadratic(double a, double b, double c, double* x1, double* x2) {
    double d = b * b - 4 * a * c;
    if (d < 0) {return -1;}
    if (d > 0) {
	*x1 = (- b - sqrt(d)) / (2 * a);
	*x2 = (- b + sqrt(d)) / (2 * a);
    } else {
	*x1 = (- b) / (2*a);
	*x2 = *x1;
    }
    return 0;
}
