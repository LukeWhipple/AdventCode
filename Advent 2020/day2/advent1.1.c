#include <stdlib.h>

#include <stdio.h>

#include <string.h>

int main(int argc, char ** argv) {
    
   
     FILE * f = fopen("read.csv", "r");
         char singleLine[200];
     int leastNum = 0;
     int mostNum = 0;
   int total = 0;
   
   for(int k=0; k<1000; k++){
    fgets(singleLine, 200, f);
   singleLine[strlen(singleLine) - 1] = '\0';
 
    
    
    leastNum = atoi(strtok(singleLine, "-"));
    
    mostNum = atoi(strtok(NULL, " "));
    
    char* letter = strtok(NULL, ":");
  // strtok(NULL, " ");
   
   char* str = strtok(NULL, " ");
   printf("%s\n", str);
  int i = 0;
  char *pch=strchr(str,*letter);
  while (pch!=NULL) {
    i++;
    pch=strchr(pch+1,*letter);
  }
  
  printf("%d\n", i);
  printf("--%d, %d--%d\n", leastNum, mostNum, total);
  if(i <= mostNum && i >= leastNum){
      total++;
  }
   }
   printf("\n<<<<<<%d", total);
}