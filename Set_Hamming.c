//
// Created by Clang on 26. 4. 8..
//
#include "Common.h"

void set_Hamming(char *buffer, int *arr, int len,int pBits) {
    int count =0;
    for (int i = 0; i<len; i++) {
        if ((i + 1) && (((i + 1) & ((i + 1) - 1)) == 0)) {
            continue;
        }
        arr[i] = buffer[count]-'0';
        count++;
    }
    for (int i = 0; i<len; i++) { // & 연산자를 사용할것.
       if (arr[i]==2) {
           int parity_Pos=i+1;
           int set_Bit_count =0;

           for (int j =0; j<len; j++) {
               if ((arr[j] != 2) && ((j + 1) & parity_Pos)&& (arr[j] == 1)) {
                    set_Bit_count++;
               }
           }
           if (set_Bit_count%2==0) {
               arr[i]=0;
           }
           else arr[i]=1;
       }

    }
    //p1 = 한번 찾고 한턴쉬고
    //p2 = 두번찾고 두턴쉬고
}