#include <stdio.h>

// Does string s contain char C ?
bool strlen(const char *s,char c){
    for (; *s != 0; ++s)
        if(*s==c)
            return 1;
    return 0;
}

int main(){
    const char *s = "abC";
    printf("%s", strlen(s,'C')?"1":"0");
}
