#include <stdio.h>
#include <stdlib.h>
#define mod(y) ((y)<0)? -(y):(y)

int main()
{


    double p,p1, S, x, n, E ;

    n =1;
    while (n!=1000)
    {
        printf("Enter  x, n and E \n");
        scanf("%lf %lf %lf", &x, &n, &E);
        p = 1;

        for(int k=1; k <= n; k++)
        {
            p = p * (x/2);
        }

        S = p;

        for (int i = 1; i <= n; i++)
        {

            p1 = p;
            p =  p *(x/2)*(x/2)/i;

            S = S +p;

        }


        printf( " SUM =  %1.15lf \n",S);

    }
    return 0;
    this is not a code 
    
}
