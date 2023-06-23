#include <stdio.h>
#include <string.h>

char lexicographically_follower_of_entangled_words(char* w, int l, int n) {
    int i;
    int lastCharIndex = l - 1;

    for (i = 0; i < l; i++) {
        if (w[i] != n - 1) {
            break;
        }
    }
    if (i == l) {
        return 0;  
    }

    for (i = lastCharIndex; i >= 0; i--) {
        if (w[i] != n - 1) {
            break;
        }
    }

    w[i]++;

    for (i = i + 1; i < l; i++) {
        w[i] = 0;
    }

    return 1;  
}

int main() {
    char word[] = "abc";  
    int l = strlen(word);  
    int n = 26; 

    printf("Uvodne slovo: %s\n", word);
    printf("Nasiel sa lexikograficky nastupca: %d\n", lexicographically_follower_of_entangled_words(word, l, n));
    printf("Lexikograficky nastupca: %s\n", word);

    return 0;
}
