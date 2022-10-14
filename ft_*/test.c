#include <string.h>
#include <stdio.h>
 
char source[ ] = "string";
 
int main(void)
{
  printf( "%s\n", source );
  char  *dst = source + 3;
  memmove( dst, source, sizeof(source));
  printf( "%s\n", source );
}
