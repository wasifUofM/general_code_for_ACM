#include<iostream>
#onclude<stdio.h>
using namespace std;

int is_prime(int n) { 
  if (n == 1) return 0;         // 1 is NOT a prime 
  if (n == 2) return 1;         // 2 is a prime 
  if (n%2 == 0) return 0;       // NO prime is EVEN, except 2 
  for (int i=3; i*i<=n; i+=2)   // start from 3, jump 2 numbers 
    if (n%i == 0)               //  no need to check even numbers 
      return 0; 
  return 1; 
} 
int main()
{
   
return 0;
    
}
