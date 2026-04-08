//
// Created by Clang on 26. 4. 7..
//

#include "Common.h"

void get_input( char *buffer) {
    printf("임의의 데이터 비트를 입력하시오 : ");
    scanf("%s", buffer);
    int len = strlen(buffer);
    for (int i = 0; i < len; i++) {
        if (buffer[i] != '0' && buffer[i] != '1') {
            printf("Invalid input");
            exit(1);
        }
    }
    printf("%d",len);
}