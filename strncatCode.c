#include <stdio.h>
#include <string.h>


char * cat_strn(char * dest, char * source, int n){
    int i;
    int og_len = strlen(dest);
    for(i = 0; i < n; i++){
        dest[og_len + i] = source[i];
    }
    dest[og_len + i + 1] = 0;
    return dest;

}

/*int main(){
    printf("******* TESTING STRLN *******\n\n");
    printf("Three test cases: 'hello', 'waffle' and 'wooiekazooie'\n");
    char T1[20] = "hello";
    char T2[20]  = "waffle";
    char T3[20]= "wooiekazooie";

    printf("## TEST 1 ##\n");
    printf("The default strncat says: %s. My strncat says: %s", strncat(T1, T2, 6), cat_strn(T1, T2, 6));

    printf("\n\n## TEST 2 ##\n");
    printf("The default strncat says: %s. My strncat says: %s\n", strncat(T2, T3, 12), cat_strn(T2, T3, 12));

    return 0;
}*/
