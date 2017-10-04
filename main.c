#include <stdio.h>
#include <string.h>
#include "headers.h"


int main() {

  char * T1 = "hello";
  char * T2 = "waffle";
  char * T3 = "e";
  char * T4 = "ello";

  printf("\n------------------------------TESTING STRCMP-------------------------------\n \n");

  T1 = "hello";
  T2 = "waffle";
  T3 = "e";
  T4 = "ello";
  
  test_cmp_str( T1, T2 );
  test_cmp_str( T1, T3 );
  test_cmp_str( T2, T3 );
  test_cmp_str( T2, T1 );
  test_cmp_str( T3, T1 );
  test_cmp_str( T3, T2 );
  test_cmp_str( T3, T4 );

  
  printf("\n------------------------------TESTING STRCHR-------------------------------\n \n");

  T1 = "hello";
  T2 = "waffle";
  T3 = "e";
  
  test_chr_str( T1, *T3 );
  test_chr_str( T1, T2[4] );
  test_chr_str( T2, 'f' );
  test_chr_str( T2, 'j' );

  
}
