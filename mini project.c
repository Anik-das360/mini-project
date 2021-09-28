#include <stdio.h>
 
 long double fibbo (int n);
 
int main ()
{
   	int n;
 
   	printf ("\n Enter the nth term you wish to find:  ");
   	scanf("%d", &n);	
    if (n < 0)
        printf ("No! No output!!! Nth term cannot be in negative...");
    else     
	    printf("\n Fibonacci Number at %d place is %.0Lf", n, fibbo (n));
    return 0;
}
 
 long double fibbo (int n)
{
   	if ( n == 0 )
    	return 0.0;
   	else if ( n == 1 || n == 2 )
    	return 1.0;
   	else
	{
		 long double a = 1.0, b = 1.0, c;
		for (int i = 3; i <= n; ++i)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}