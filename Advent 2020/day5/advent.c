// #include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "demo.h"

int main(int argc, char ** argv) {
    FILE * f = fopen("read.txt", "r");
    char singleLine[200];
   int passes[907];
    for(int k=0; k<908; k++) {
        int lowRow = 0, highRow = 127, lowCol = 0, highCol = 7, temp = 0;
        char g = 'F', l = 'L';
        fgets(singleLine, 200, f);
        
        singleLine[strlen(singleLine) - 1] = '\0';
        cut(singleLine, &highRow, &lowRow, 0, g);
        cut(singleLine, &highRow, &lowRow, 1, g);
        cut(singleLine, &highRow, &lowRow, 2, g);
        cut(singleLine, &highRow, &lowRow, 3, g);
        cut(singleLine, &highRow, &lowRow, 4, g);
        cut(singleLine, &highRow, &lowRow, 5, g);
        cut(singleLine, &highRow, &lowRow, 6, g);
        cut(singleLine, &highCol, &lowCol, 7, l);
        cut(singleLine, &highCol, &lowCol, 8, l);
        cut(singleLine, &highCol, &lowCol, 9, l);

        temp = (highRow * 8) + highCol;
       passes[k]= temp; 
        
        if(temp > answer){
            answer = temp;
        }
    }
    qsort( passes, 908, sizeof(int), compare );
    
    for(int b = 0; b < 908; b++){
        if(b <= 906){
        if(passes[b] +2 == passes[b+1]){
         printf("{%d}{%d}", passes[b], passes[b+1]);
    }
        }
    }
    printf("<<%d %d", answer, passes[907]);
}