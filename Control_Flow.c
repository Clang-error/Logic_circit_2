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
    set_Hamming(buffer,hamming_Code,hamming_Len);


    free(hamming_Code);


}