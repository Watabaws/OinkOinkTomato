#include <stdio.h>
#include <string.h>
#include "headers.h"


int main() {
  char * T1j = "hello";
  char * T2j = "waffle";
  char * T3j = "e";
  char * T4j = "ello";

  printf("**************************** TESTING STRNCPY **********************************\n\n");
  printf("Three variables: 'hello', 'waffle' and 'wooiekazooie'\n");

  char T1[20] = "hello";
  char T2[20]  = "waffle";
  char T3[20]= "wooiekazooie";

  printf("## TEST 1: VAR 2 INTO VAR 1 [n = 7] ##\n");
  printf("The default strncpy returns: %s. My strncpy says: %s\n", strncpy(T1, T2, 7), cpy_strn(T1, T2, 7));

  printf("\n\n## TEST 2: VAR 3 INTO VAR 2 [n = 12] ##\n");
  printf("The default strncpy says: %s. My strlen says: %s\n\n", strncpy(T2, T3, 12), cpy_strn(T2, T3, 12));

  T1[20] = "hello";
  T2[20]  = "waffle";
  T3[20]= "wooiekazooie";

  printf("## TEST 1 ##\n");
  printf("The default strncat says: %s. My strncat says: %s", strncat(T1, T2, 6), cat_strn(T1, T2, 6));

  printf("\n\n## TEST 2 ##\n");
  printf("The default strncat says: %s. My strncat says: %s\n", strncat(T2, T3, 12), cat_strn(T2, T3, 12));

  printf("*************************************************************** TESTING STRLN ***************************************************\n\n");
  printf("Three test cases: 'hello', 'waffle' and ''\n");
  char * T1a = "hello";
  char * T2a = "waffle";
  char * T3a = "";

  printf("## TEST 1 ##\n");
  printf("The default strlen says: %lu. My strlen says: %d", strlen(T1a), len_str(T1a));

  printf("\n\n## TEST 2 ##\n");
  printf("The default strlen says: %lu. My strlen says: %d", strlen(T2a), len_str(T2a));

  printf("\n\n## TEST 3 ##\n");
  printf("The default strlen says: %lu. My strlen says: %d\n", strlen(T3a), len_str(T3a));

  printf("\n------------------------------TESTING STRCMP-------------------------------\n \n");

  T1j = "hello";
  T2j = "waffle";
  T3j = "e";
  T4j = "ello";

  test_cmp_str( T1j, T2j );
  test_cmp_str( T1j, T3j );
  test_cmp_str( T2j, T3j );
  test_cmp_str( T2j, T1j );
  test_cmp_str( T3j, T1j );
  test_cmp_str( T3j, T2j );
  test_cmp_str( T3j, T4j );


  printf("\n------------------------------TESTING STRCHR-------------------------------\n \n");

  T1j = "hello";
  T2j = "waffle";
  T3j = "e";

  test_chr_str( T1j, *T3j );
  test_chr_str( T1j, T2j[4] );
  test_chr_str( T2j, 'f' );
  test_chr_str( T2j, 'j' );


}
