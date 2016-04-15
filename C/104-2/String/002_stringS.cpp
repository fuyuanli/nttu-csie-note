#include <stdio.h>

// Does string s contain char C ?
bool strlen(const char *s){
    for (; *s != 0; ++s)
        if(*s=='C')
            return 1;
    return 0;
}

int main(){
    const char *s = "abC";
    printf("%s", strlen(s)?"1":"0");
}
