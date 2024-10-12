#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "The quick brown fox"; // String to be searched
    char ch = 'q'; // The character we are looking for
    char *got_char = NULL; // Pointer initialised to NULL

    got_char = strchr(str, ch); // Stores address where ch is found

    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *wordFound = NULL;

    wordFound = strstr(text, word);

    char str2[80] = "Hello how are you, my name is - Geralt";
    const char s[2] = "-";
    char *token;

    // Get the first token
    token = strtok(str, s);

    // Walk through other tokens
    while(token != NULL) {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }

    printf("\n");
    return 0;
}

