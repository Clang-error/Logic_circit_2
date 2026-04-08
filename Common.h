//
// Created by Clang on 26. 4. 7..
//

#ifndef LOGIC_CIRCIT_2_CONVERT_H
#define LOGIC_CIRCIT_2_CONVERT_H

//표준 라이브러리
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//함수원형
void control();
int bit_Size();
int need_Parity(int bit_size);
void input_Data(char *buffer, int len);
void set_Hamming(char *buffer, int len, int parity_bits);
void print_Hamming_Code();




#endif //LOGIC_CIRCIT_2_CONVERT_H


