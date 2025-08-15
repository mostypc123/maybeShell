#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // maybeShell 1
    // A simple, very small shell.
    // Designed for my learning needs.
    // No licensing, feel free to take this code.

    char prompt[256]; // define buffer size

    while (true) {
        printf("maybeShell> ");

        if (fgets(prompt, sizeof(prompt), stdin) == NULL) {
            break; // handle EOF
        }

        // this for testing
        printf("Size of prompt: %zu\n", sizeof(prompt));

        int output = system(prompt);
        (void)output; // silence unused variable warning
    }
}
