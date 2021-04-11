#include <stdio.h>
#include <string.h>

int main(){
    char word[BUFSIZ], mode;
    int i, len;

    printf("Text: ");
    fgets(word, BUFSIZ, stdin);
    len = strlen(word);

    printf("Convert to (d: decimal, x: hex, o: octal): ");
    mode = getchar();

    if (word[len-1] == '\n'){
        word[--len] = '\0';
    }

    printf("Calculating...\n");

    if (mode == 'd'){
        // DECIMAL
        for (i = 0; i < len; i++){
            printf("%d ", word[i]);
        }
    } else if (mode == 'x'){
        //HEX
        for (i = 0; i < len; i++){
            printf("%02x ", word[i]);
        }
    } else if (mode == 'o'){
        //OCT
        for (i = 0; i < len; i++){
            printf("%o ", word[i]);
        }
    } else {
        printf("Mode must be decimal or hex or octal.");
    }

    printf("\n");
    return 0;
}
