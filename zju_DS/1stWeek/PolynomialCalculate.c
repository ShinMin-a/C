// Calculate the polynomial value at given number.

#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start, stop; //cloct_t is the return type of clock()
double duration;
#define MAXN 10 //total terms of polynomial, that is exponent+1
#define MAXK 1e3 //repeat times
double f1(int, double a[], double);
double f2(int, double a[], double);

int main()
{
	int i;
	double a[MAXN]; //store coefficients of polynomial
	for(i=0; i<MAXN; i++) 
		a[i] = (double)i; //initialize coefficients
	
	start = clock();
	for(i=0; i<MAXK; i++)
		f1(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double)(stop-start))/CLOCK_TAI/MAXK;
	printf("ticks1 = %f\n", (double)(stop-start));
	printf("duration1 = %6.2e\n", duration);
	
	start = clock();
	for(i=0; i<MAXK; i++)
		f2(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double)(stop-start))/CLOCK_TAI/MAXK;
	printf("ticks2 = %f\n", (double)(stop-start));
	printf("duration2 = %6.2e\n", duration);
	
	return 0;
}

double f1(int n, double a[], double x)
{
	int i;
	double p = a[0];
	for(i=1; i<=n; i++)
		p += (a[i]*pow(x, i));
		
	return p;
}

double f2(int n, double a[], double x)
{
	int i;
	double p = a[n];
	for(i=n; i>0; i--)
		p += a[i-1] + x*p;
		
	return p;
}
