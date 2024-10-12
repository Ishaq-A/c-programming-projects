#include <stdio.h>
#include <stdbool.h>

int stringLength(char array[]);
void stringConcat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main() {

    char string[] = "hello there";
    printf("%d\n", stringLength(string));

    char str1[] = "bob";
    char str2[] = "gob";
    char result[20];

    stringConcat(result, str1, str2);
    printf("%s\n", result);

    printf("\n");
    return 0;
}

int stringLength(char array[]) {
    int count = 0;

    for(int i = 0; array[i] != '\0'; i++) {
        count = i;
    }

    return count;
}

void stringConcat(char result[], const char str1[], const char str2[]) {
    int i, j;

    for(i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
}

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool isEqual = false;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }

    if(s1[i] == '\0' && s2[i] == '\0') {
        isEqual = true;
    } else {
        isEqual = false;
    }

    return isEqual;
}

