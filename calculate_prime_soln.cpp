#include<iostream>
#include<conio.h>
using namespace std;
int is_prime(int n)
{
    int p=1;
    if(n%2==0)return 0;
    else {
        for(int i=3;i*i<=n;i++)
        {
            if(n%i==0)
            {
                p=0;
                return 0;
            }
        }
    if(p==1)return 1;
    else return 0;
}
}
            
int main()
{
    int n,i,res;
    while(cin>>n)
    {
        if(is_prime(n))
        {
            cout<<"It's a prime number"<<endl;
        }
        else cout<<"not a prime number"<<endl;
    }
    getch();
    return 0;
}
