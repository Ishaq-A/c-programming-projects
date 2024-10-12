#include <stdio.h>

int stringLength(const char *string) {
    const char *lastAddress = string;

    while(*lastAddress) {
        ++lastAddress;
    }

    int length = lastAddress - string;

    return length;
}

int main() {

    char string[] = "My String";
    
    printf("The length of %s, is %d\n", string, stringLength(string));

    printf("\n");
    return 0;
}

