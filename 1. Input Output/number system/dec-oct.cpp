#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sc scanf

int n,res,m;

void readcase()
{
   sc("%d",&n);
   m=n;
}

void solvecase()
{
   int p,f=1;

        res=0;
        while(n>0)
        {
            p=n%8;
            //pf("p=%d\n",p);
            f*=10;
            // pf("f=%d\n",f);
            res+=(p*f);
            //pf("res=%d\n",res);
            n=n/8;
            // pf("nn%d\n",n);
        }

}
void printcase()
{
  pf("The octal of %d is %d\n",m,res/10);

}


int main()
{
    int n;


   while(1)

    {
       readcase();
       solvecase();
       printcase();
    }
}


