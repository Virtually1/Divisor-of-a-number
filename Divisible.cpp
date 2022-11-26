#include <iostream>
#include <math.h>
using namespace std;
//It works i think only in code::blocks with GNU GCC Compiler
int main()
{
    int n,m,i,f,g;
        cout<<"Total amount of Numbers N=";
        cin >>n;
        for (i=1;i<=n;i++)
        {
            cout <<"Number chosen M=";
            cin >>m;
            cout<<"Divisibile with:"<<endl;
            for (g=1;g<=m;g++)
            {
                if(m%g==0)
                {
                    f=g;
                    cout<<f<<endl;
                }
            }
        }

    return 0;
}