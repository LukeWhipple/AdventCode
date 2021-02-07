#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "demo.h"

 void cut(char* singleLine, int *highRow, int *lowRow, int i, char f) {
        if(singleLine[i] == f) {
            *highRow = *highRow - (((*highRow - *lowRow) / 2)+1);
        } else {
            *lowRow = *lowRow + (((*highRow-*lowRow)/2) + 1);
        }
       // printf("(%d , %d)", *lowRow, *highRow);
    }
    
    int answer = 0; 
    
int compare( const void* a, const void* b)
{
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}

