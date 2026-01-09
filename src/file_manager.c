#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        return 1;
    }

    fprintf(fp, "Dataset lifecycle test");
    fclose(fp);

    return 0;
}
