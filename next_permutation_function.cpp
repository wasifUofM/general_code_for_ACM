#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int   n,ar[100],i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
         cin>>ar[i];
    }
    
    while(next_permutation(ar,ar+n))
    {
       for(i=0;i<n;i++)
       {
          cout<<ar[i]<<endl;
          }
          }
          getch();
          return 0;
}
