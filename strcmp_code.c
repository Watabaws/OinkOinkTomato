#include <stdio.h>
#include <string.h>



int cmp_str( char * s, char * t ) {
  int ctr = 0;
  while ( *(s + ctr) ) {
    if ( *(t + ctr) == 0 ) {
      return 1;
    }
    else if ( *(s + ctr) > *(t + ctr) ) {
      return 1;
    }
    else if ( *(s + ctr) < *(t + ctr) ) {
      return -1;
    }
    else {
      ctr++;
    }
  }
  return -1;
}

void test_cmp_str( char * s, char * c ) {
  printf("Testing strchr(%s, %s):\n", s, c);
  printf("[standard]: %d\n", strcmp(s, c));
  printf("[mine]: %d\n", cmp_str(s, c));
}
