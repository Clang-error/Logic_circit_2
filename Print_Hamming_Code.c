//
// Created by Clang on 26. 4. 10..
//

#include "Common.h"

void print_Hamming_Code(int *arr,int len) {

    printf("입력하신 데이터비트의 해밍코드\n");
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
}