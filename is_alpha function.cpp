/* isalpha example */
#include <stdio.h>
#include <ctype.h>
#include<conio.h>
int main ()
{
  int i=0;
  char str[]="C++";
  while (str[i])
  {
    if (isalpha(str[i])) printf ("character %c is alphabetic\n",str[i]);
    else printf ("character %c is not alphabetic\n",str[i]);
    i++;
  }
  getch();
  return 0;
}
