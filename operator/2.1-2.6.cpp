#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    double c,d,e;

    while(1)
    {
       scanf("%d %d",&a,&b);
       printf("%d %d %d %d\n",a+b,abs(a-b),(a*b),a/b);//sum,sub,product//div b>0;


       scanf("%lf %lf",&c,&d);
       if(c>d)
        e=c-d;
       else
        e=d-c;
       printf("%.2f %.2f %.2f %.2f %.2f\n",c+d,e,c*d,c/d,e);//sum,sub,product//div b>0;
     }



}




