#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    double n;
    cout<<"Enter values :"<<endl;
   while(cin>>n)
   {
    double n_digit=floor(log10(n)+1);
    cout<<n_digit<<endl;
   }
    getch();
    return 0;
}
