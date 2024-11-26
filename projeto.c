#include <stdio.h>
#include <string.h>
int main() {
    int number[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", number[1][0]);
    return 0;
}