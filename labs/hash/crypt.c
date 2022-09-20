#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        char *hash;

        if (argc < 2) {
                printf("Usage is %s: <password> <salt>\n", argv[0]);
                exit(1);
        }

        hash = crypt(argv[1], argv[2]);
        puts(hash);
}
