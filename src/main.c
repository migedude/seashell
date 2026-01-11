#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *line = NULL;
    size_t cap = 0;

    while (1) {
        printf("seashell> ");
        fflush(stdout);

        ssize_t n = getline(&line, &cap, stdin);
        if (n == -1) {
            // EOF (Ctrl-D) or read error
            printf("\n");
            break;
        }

        // For now, just echo what was typed (we’ll replace this with parsing)
        printf("you typed: %s", line);
    }

    free(line);
    return 0;
}
