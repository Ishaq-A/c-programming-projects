#include <stdio.h>
#include <string.h>

int main() {

    char multiple[] = "a string";
    char *p = multiple;

    for(int i = 0; i < strlen(multiple); i++) {
        printf("multiple[%d] = %c\n", i , multiple[i]);
        printf("*(p + %d) = %c, &multiple[%d] = %p, p + %d = %p\n\n",
                i, *(p + i), i, &multiple[i], i, p + i);
    }

    printf("\n");
    return 0;
}

