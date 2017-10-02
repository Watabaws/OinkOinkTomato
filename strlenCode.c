#include <stdio.h>
#include <string.h> 


int len_str(char * inpoot){
    int ctr = 0;
    while(* inpoot != 0){
        ctr++;
        inpoot++;
    }
    return ctr;
}



int main(){
    printf("******* TESTING STRLN *******\n\n");
    printf("Three test cases: 'hello', 'waffle' and ''\n");
    char * T1 = "hello";
    char * T2 = "waffle";
    char * T3 = "";

    printf("## TEST 1 ##\n");
    printf("The default strlen says: %lu. My strlen says: %d", strlen(T1), len_str(T1));
    
    printf("\n\n## TEST 2 ##\n"); 
    printf("The default strlen says: %lu. My strlen says: %d", strlen(T2), len_str(T2));

    printf("\n\n## TEST 3 ##\n");
    printf("The default strlen says: %lu. My strlen says: %d\n", strlen(T3), len_str(T3));
    
    return 0;
}

