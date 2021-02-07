#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "demo.h"

int main(int argc, char ** argv) {
    FILE * f = fopen("read.txt", "r");
    char singleLine[200];
   char group[907];
//   int lowRow = 0, highRow = 127, lowCol = 0, highCol = 7, temp = 0;
//         char g = 'F', l = 'L';
   int answer = 0;
   int answer2 = 0;
   int count = 0;
   int len = 0;
    for(int k=0; k<490; k++) {
     count = 0;
   
         // singleLine[strlen(singleLine) - 1] = '\0';
        while(strcmp(singleLine, "\n") != 0){
            
             fgets(singleLine, 200, f);
             if(strcmp(singleLine, "\n") != 0){
              
              
              
              
              
//             len = strlen(singleLine);
// if( singleLine[len-1] == '\n' ){
//     singleLine[len-1] = 0;}
             strcat(group, singleLine);
             
             
             
             }
            
        }
        
        //count++;
        
         //qsort( group, strlen(group), sizeof(char), compareAbc );
         int end = 0;
         for(int t = 0; t < strlen(group); t++){
         if(group[t] == '\n'){
         end++;
         }
         }
        // printf("%d", end);
         
        
        
         
        

//get input for the number of strings
char **persons = malloc(sizeof(char*)*end);
for(int i = 0; i < end; i++){
persons[i] = malloc(100*sizeof(char));
}
         
         
         
         
         
          persons[0] = strtok(group, "\n");
         qsort( persons[0], strlen(persons[0]), sizeof(char), compareAbc );
         
         for(int i = 1; i < end; i++){
         
          persons[i] = strtok(NULL, "\n");
            qsort( persons[i], strlen(persons[i]), sizeof(char), compareAbc );
   
         }
         int num = 0;
         for(int i = 0; i < end; i++){
             if(strcmp(persons[0], persons[i]) != 0 ){
                 num = 1;
             }
             
         }
         
         if(num == 0){
             answer2++;
         }
         
         printf("%s \n", group);
         
          
         for(int t = 0; t < strlen(group); t++){
         if(group[t] != group[t+1]){
             
         
         count++;
         }
         }
         
        
        
        answer = count + answer;
        
        memset(group, 0, sizeof(group));
         memset(singleLine, 0, sizeof(singleLine));
       
    
    }
    printf("%d", answer2);
    
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