#include <stdio.h>

int main() {

    unsigned T, N, i, j, k, l;
    char s[401];
    char stack[401];
    char res[401];
    
    scanf("%u", &T);
    
    for(i=0; i<T; i++) {
        k = 0;
        l = 0;
        scanf("%400s", s);
        for(j=0; s[j] != '\0'; j++) {
            if (s[j] == '(' ) {
            }
            else if (s[j] == ')') {
                res[l++] =  stack[--k];
            }
            else if  ((s[j] == '+') || (s[j] == '-') 
                    || (s[j] == '/') || (s[j] == '*') 
                    || (s[j] == '^') || (s[j] == '%')) {
                stack[k++] = s[j];
            }
            else {
                res[l++] = s[j];
            }
        }
        res[l] = '\0';
        printf("%s\n", res);
    }
    return 0;
}
