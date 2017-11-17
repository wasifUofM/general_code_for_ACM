#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,sum, res,n;
    while(cin>>n)
    {
        sum=0;
        p=0;
        while(n>0)
        {    p=n%10;
            sum=sum*10+p;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    getch();
    return 0;
}
            
