//
// Created by Clang on 26. 4. 8..
//

#include "Common.h"

int need_Parity(int bit_size) { //패리티비트 개수 연산함수.
    int RightForm = bit_size+1;
    int i = 1; //p
    while (1) {
        // 2 << (i-1)은 2^i와 같습니다.
        if ((2<<(i-1)>=i+RightForm)) {
            break;
        }
        i++;
    }
    return i;
}