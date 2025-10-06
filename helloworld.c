#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

int main() {
    char alphabet[34] = " abcdefghijklmnopqrstuvwxyz.!?():;";

    char word[26];
    printf("Spit yo shit twin --\n");
    fgets(word, sizeof(word), stdin);

    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }

    char completed[strlen(word) + 1];
    completed[0] = '\0';

    for (int i = 0; i < strlen(word); i++) {
        char c = tolower(word[i]);

        for (int j = 0; j < 34; j++) {
            printf("%s ", completed);
            printf("%c\n", alphabet[j]);
            fflush(stdout);
            Sleep(50);

            if (alphabet[j] == c) {
                strncat(completed, &c, 1);
                break;
            }
        }
    }

    printf("%s", completed);

    return 0;
}
