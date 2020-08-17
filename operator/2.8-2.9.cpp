#include<bits/stdc++.h>
using namespace std;

int main()
{
    double celsius,farenheit,n;
    double celsius1,farenheit1;

    while(1)
    {
       scanf("%lf",&n);

       farenheit= ((n*9)/5)+32;
       celsius = ((n-32)*5) /9;

       printf("farenheit = %.2f celsius = %.2f\n",farenheit,celsius);

    }



}





