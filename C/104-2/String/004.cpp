#include <stdio.h>
#include <string.h>

char *first_at(char *str, char ch){
    for(;*str; ++str)
        if(*str==ch)
            return str;
    return 0;
}

int main(){
    
    const char *s = "ABC123";
    printf("%x",first_at(s,'B'));
    return 0;
}
