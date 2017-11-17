#include<iostream>
#include<conio.h>
using namespace std;
int Gcd(int a,int b)
{
    if(b)return Gcd(b,a%b);
    else return a;
}
int main()
{
    int n,a,b,res;
    while(cin>>a>>b)
    {
        res=Gcd(a,b);
        cout<<res<<endl;
    }
    getch();
    return 0;
}
