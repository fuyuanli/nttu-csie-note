#include <stdio.h>

// Arr 2 strings s1 and s2 equal?
int strlen(const char *s){
    int len = 0;
    for (; *s != 0; ++s)
        ++len;
    return len;
}

bool strequal(const char *s1,const char *s2){
    if(strlen(s1)!=strlen(s2))
        return 0;

    for(int i=0;i<strlen(s1);++i)
        if(*(s1+i) != *(s2+i))
            return 0;
    return 1;
}

int main(){
    const char *s1 = "ABCDE";
    const char *s2 = "ABCDE";
    
    printf("%s",strequal(s1,s2)?"1":"0");
}
