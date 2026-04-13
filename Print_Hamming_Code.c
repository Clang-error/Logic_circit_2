//
// Created by Clang on 26. 4. 10..
//

#include "Common.h"

void print_Hamming_Code(int *arr,int len,int dLen) {

    printf("\n-----------------------------------------------------\n");
    printf("입력하신 데이터비트의 해밍코드는\n");
    printf("총비트수 %d비트(데이터비트 %d + 패리티비트 %d)의 해밍코드입니다.\n",len,dLen,len-dLen);
    printf("결과값 :");
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
    printf("\n-----------------------------------------------------\n");
}