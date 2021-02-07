#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "demo.h"

int main(int argc, char ** argv) {
    FILE * f = fopen("read.txt", "r");
    char singleLine[200];
   int group[93];
//   int lowRow = 0, highRow = 127, lowCol = 0, highCol = 7, temp = 0;
//         char g = 'F', l = 'L';
   int answer1 = 0;
   int answer2 = 0;
   int answer3 = 1;
   int count = 0;
   int len = 0;
    for(int k=0; k<94; k++) {
    
    fgets(singleLine, 200, f);
    
    
    
    group[k] = atoi(singleLine);
    
   // printf("%d\n", group[k]);
  }

  qsort(group, 94, sizeof(int), compare);

  for(int i = 0; i < 94; i++){
      if((group[i]) == 3){
          answer3++;
      }
       if((group[i]) == 1){
           answer1++;
       }
      
      
      if((group[i+1] - group[i]) == 3){
          answer3++;
      }
        if((group[i+1] - group[i]) == 2){
          answer2++;
      }
       if((group[i+1] - group[i]) == 1){
           answer1++;
       }
      
   printf("%d\n", group[i]);
}

printf("1 %d, 2 %d, 3 %d\n", answer1, answer2, answer3);

 len = answer1 * answer3;
 
 printf("%d, \n", len);
}



//         temp = (highRow * 8) + highCol;
//       passes[k]= temp; 
        
//         if(temp > answer){
//             answer = temp;
//         }
//     }
//     qsort( passes, 908, sizeof(int), compare );
    
//     for(int b = 0; b < 908; b++){
//         if(b <= 906){
//         if(passes[b] +2 == passes[b+1]){
//          printf("{%d}{%d}", passes[b], passes[b+1]);
//     }
//         }
//     }
//     printf("<<%d %d", answer, passes[907]);
// }