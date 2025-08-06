#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[100];
    char b[100];
    char result[100];
    
    scanf("%s",s);
    scanf("%s",b);
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]==b[i]){
            result[i]='0';
        }
        else{
            result[i]='1';
        }
    }
    result[strlen(s)] = '\0';
    
    printf("%s",result);   
}
