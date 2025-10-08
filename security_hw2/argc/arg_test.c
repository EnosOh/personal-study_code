#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("총 인수 개수: %d\n", argc);

    printf("전달된 인수 목록:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}
