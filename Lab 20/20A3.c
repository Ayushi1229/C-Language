#include <stdio.h>

struct example_struct {
    int a;
    float b;
    char c;
};

union example_union {
    int a;
    float b;
    char c;
};

int main() {
    struct example_struct s;
    union example_union u;

    printf("Size of structure: %ld bytes\n", sizeof(s));
    printf("Size of union: %ld bytes\n", sizeof(u));

    return 0;
}
