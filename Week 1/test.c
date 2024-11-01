#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

char name1[MAX_NAME_LENGTH]= "Dinh Duc Anh";

int main() {

    int lastSpace = -1;
    for ( int i = 0; name1[i] != '\0' ; i ++){
        if (name1[i] == ' '){
            lastSpace = i;
        }
    }
    // In ra chuỗi sau dấu cách cuối cùng
    for (int i = lastSpace + 1; name1[i] != '\0'; i++) {
        printf("%c", name1[i]);
    }

    // In ra dấu cách
    printf(" ");

    // In ra chuỗi trước dấu cách cuối cùng
    for (int i = 0; i < lastSpace; i++) {
        printf("%c", name1[i]);
    }

    printf("\n");

    return 0;
}
