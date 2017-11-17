/* memset example 
function
memset
<cstring>

void * memset ( void * ptr, int value, size_t num );

Fill block of memory
Sets the first num bytes of the block of memory pointed by ptr to the specified value (interpreted as an unsigned char).

Parameters

ptr
    Pointer to the block of memory to fill.
value
    Value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
num
    Number of bytes to be set to the value.
    size_t is an unsigned integral type.

*/
#include <stdio.h>
#include <string.h>
#include<conio.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  memset (str,'!',12);
  puts (str);
  getch();
  return 0;
}
