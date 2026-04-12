//
// Created by Clang on 26. 4. 7..
//

#include "Common.h"

void control() {
    char buffer[100]; //임의 버퍼사이즈 선언. 데이터비트값 저장용
    int bits = bit_Size();
    int parity_Bits = need_Parity(bits);
    input_Data(buffer,bits);
    int * hamming_Code = malloc(sizeof(int)*(bits+parity_Bits));
    int hamming_Len = bits+parity_Bits;
    for (int i = 0; i < hamming_Len; i++) {
        hamming_Code[i] = 2;
    } // 배열을 전부 2로 초기화하여 패리티비트 연산편의를 위함
    set_Hamming(buffer,hamming_Code,hamming_Len,parity_Bits);
    print_Hamming_Code(hamming_Code,hamming_Len,bits);


    free(hamming_Code);


}