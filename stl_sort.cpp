#include <stdio.h> 
#include <vector> 
#include <algorithm> 
#include<conio.h>
 
using namespace std; 
 
int main()
{
  // just do this, write vector<the type you want, 
  // in this case, integer> and the vector name 
  vector<int> v; 
 
  // try inserting 7 different integers, not ordered 
  v.push_back(3); 
  v.push_back(1); 
  v.push_back(7);
  v.push_back(4); 
 v.push_back(6); 
  v.push_back(5); 
  v.push_back(8);
 
 
 
  // to access the element, you need an iterator... 
  vector<int>::iterator i;   
 
  printf("Unsorted version\n"); 
  // start with 'begin', end with 'end', advance with i++ 
  for (i = v.begin(); i!= v.end(); i++) 
    printf("%d ",*i); // iterator's pointer hold the value 
  printf("\n"); 
 
  sort(v.begin(),v.end()); // default sort, ascending 
 
  printf("Sorted version\n"); 
  for (i = v.begin(); i!= v.end(); i++) 
    printf("%d ",*i); // iterator's pointer hold the value 
  printf("\n"); 
  getch();
  return 0;
}
