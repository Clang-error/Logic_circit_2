//
// Created by Clang on 26. 4. 7..
//

#include "Common.h"

int bit_Size() {
    int a;
    printf("비트사이즈를 입력하시오: ");
    scanf("%d",&a);
    return a;
}

void input_Data(char *buffer, int bit_len) {
    while (1) {
        printf("임의의 데이터 비트를 입력하시오 : ");
        scanf("%s", buffer);
        int len = strlen(buffer);
        if (len != bit_len) {
            printf("%d사이즈만큼의 비트를 입력하시오\n",bit_len);
            continue;
        }
        int valid = 1;
        for (int i = 0; i < bit_len; i++) {
            if (buffer[i] != '0' && buffer[i] != '1') {
                valid = 0;
                break;
            }
        }

        if (!valid) { //유효값 검사
            printf("잘못된 입력입니다\n");
            continue;
        }

        return;
    }
}