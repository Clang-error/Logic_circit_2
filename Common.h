//
// Created by Clang on 26. 4. 7..
//

#ifndef LOGIC_CIRCIT_2_COMMON_H
#define LOGIC_CIRCIT_2_COMMON_H

//표준 라이브러리
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//전역 상수
#define MAX_RANGE 100
#define MIN_RANGE 1

//함수원형
void control();
int bit_Size();
int need_Parity(int bit_size);
void input_Data(char *buffer, int len);
void set_Hamming(char *buffer, int *arr, int len,int pBits);
void print_Hamming_Code(int *arr,int len,int dLen);



#endif //LOGIC_CIRCIT_2_COMMON_H


