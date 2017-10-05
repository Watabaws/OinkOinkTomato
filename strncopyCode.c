    #include <stdio.h>
#include <string.h>


char * cpy_strn(char * dest, char * source, int n){
    int i;
    for(i = 0; i < n; i++){
        dest[n] = source[n];
    }
    return dest;
}

/*int main(){
    printf("******* TESTING STRNCPY *******\n\n");
    printf("Three variables: 'hello', 'waffle' and 'wooiekazooie'\n");

    char T1[20] = "hello";
    char T2[20]  = "waffle";
    char T3[20]= "wooiekazooie";

    printf("## TEST 1: VAR 2 INTO VAR 1 [n = 7] ##\n");
    printf("The default strncpy returns: %s. My strncpy says: %s\n", strncpy(T1, T2, 7), cpy_strn(T1, T2, 7));

    printf("\n\n## TEST 2: VAR 3 INTO VAR 2 [n = 12] ##\n");
    printf("The default strncpy says: %s. My strlen says: %s\n\n", strncpy(T2, T3, 12), cpy_strn(T2, T3, 12));

    return 0;
}*/
