#include <bits/stdc++.h>
using namespace std;

#define SIZE 8
#define eps 1e-7

double x, a[SIZE], q[SIZE], root[SIZE];

int i, n, cnt, t;

int cmp(const void *a, const void *b)
{
    double A = *(double *)a;
    double B = *(double *)b;

    if(fabs(A-B) <= eps)
    {
        return 0;
    }
    if(A-B > eps)
    {
        return 1;
    }
    return -1;
}
double f(double *a, int n, double x)
{
    double sum, p=1;
    
    for(int i = sum = 0; i <= n; i++, p*=x){
        sum += a[i]*p;
    }
    return sum;
}

double fderive(double *a, int n, double x)
{
    double sum, p=1;
    for(int i = sum = 0; i <= n; i++, p*=x)
    {
        sum += a[i+1] * (i+1) * p;
    }
    return sum;
}

int main()
{
    for(t = 1; scanf("%d", &n)==1; t++)
    {
        if(!n){
            break;
        }

        for(int i = n; i >= 0; i--)
        {
            scanf("%lf", &a[i]);
        }

        for(cnt = 0; n; n--)
        {
            for(x=0; fabs( f(a, n, x) ) > eps; )
            {
                x -= f(a, n, x) / fderive(a, n, x);
            }

            root[cnt++] = x;

            q[n] = 0;

            for(int i = n-1; i >= 0; i--)
            {
                q[i] = a[i+1] + x*q[i+1];
            }

            memcpy(a, q, sizeof(q));

        }

        printf("Equation %d", t);

        qsort(root, cnt, sizeof(double), cmp);

        for( i = 0; i < cnt; i++)
        {
            printf(" %.4lf", root[i]);
        }
        puts("");
    }
    return 0;
}