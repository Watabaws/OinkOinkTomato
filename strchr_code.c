#include <stdio.h>
#include <string.h>



char * chr_str( char * s, char c ) {
  while ( *s) {
    if ( *s == c ) {
      return s;
    }
    s++;
  }
}

void test_chr_str( char * s, char c ) {
  printf("Testing strchr(%s, %c):\n", s, c);
  printf("[standard]: %s\n", strchr(s, c));
  printf("[mine]: %s\n", chr_str(s, c));
}
