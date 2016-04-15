#include <stdio.h>

int strlen(const char *s){
    int len = 0;
    for (; *s != 0; ++s)
        ++len;
    return len;
}

int main(){
    const char *s = "abc";
    printf("%d", strlen(s));
}
