#include <stdio.h>
#include <string.h>

void my_len(char c[]) {
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++) 
    {
        count++;
    }
    printf("%d", count);
}

int main() {
    char c[100];
    scanf("%s", c);
    my_len(c);
    return 0;
}
