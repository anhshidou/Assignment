#include <stdio.h>

int main(){
	int n, m;
	float a, b;
	double c, d;
	printf ("Enter two integers:\n");
	scanf ("%d %d", &n, &m);
	printf ("Enter two floats:\n");
	scanf ("%f %f", &a, &b);
	printf ("Enter two doubles:\n");
	scanf ("%lf %lf", &c, &d);
	
	
	printf ("Enter integers:%d, addresses: %p\n", n, &n);
	printf ("Enter integers:%d, addresses: %p\n", m, &m);

	printf ("Enter float:%2.f , addresses: %p\n", a, &a);
	printf ("Enter float:%2.f, addresses: %p\n", b, &b);
	
	printf ("Enter double:%2.lf, addresses: %p\n", c, &c);
	printf ("Enter double:%2.lf, addresses: %p", d, &d);
	
}
