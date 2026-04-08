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

// void input_Data() {
//     printf("임의의 데이터 비트를 입력하시오 : ");
//     scanf("%s", buffer);
//     int len = strlen(buffer);
//     for (int i = 0; i < len; i++) {
//         if (buffer[i] != '0' && buffer[i] != '1') {
//             printf("Invalid input");
//             exit(1);
//         }
//     }
//     printf("%d",len);
// }