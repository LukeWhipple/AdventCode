#include <stdlib.h>

#include <stdio.h>

#include <string.h>

int main(int argc, char ** argv) {
    
   
     FILE * f = fopen("read.csv", "r");
         char singleLine[200];
     int leastNum = 0;
     int mostNum = 0;
   int total = 0;
   int count = 0;
   int z = 0;
   int trees = 0;
   
  
   for(int k=0; k<323; k++){
    count++;
    
    fgets(singleLine, 200, f);
  // if((count%2) != 0){
   
   singleLine[strlen(singleLine) - 1] = '\0';
 if(z > 30){
  if((z - 30) == 1){
  z = 0;}
  if((z - 30) == 3){
  z = 2;}
  if((z - 30) == 2){
  z = 1;
}
if((z - 30) == 4){
  z = 3;
}
if((z - 30) == 5){
  z = 4;
}
if((z - 30) == 6){
  z = 5;
}
if((z - 30) == 7){
  z = 6;
}
if((z - 30) == 8){
  z = 7;
}



}

printf("%d--}", count);
    if(singleLine[z] == '#'){
     trees++;
      printf("%d<<", trees);
    }
    printf("%c\n", singleLine[z]);
     
     z = z + 7;
  //}
   }
   
   printf("\n<<%d", trees);
   
}
  
  // strtok(NULL, " ");
   
  
   
   
 
   
   
   // if((str[leastNum - 1] == *letter) || (str[mostNum - 1] == *letter)){
   //  if((str[leastNum - 1] == *letter) && (str[mostNum - 1] == *letter)){
   //   printf("oof");
   //  } else {
   //   count++;
   //  }
   //  }
    
   
//    printf("%s\n", str);
//   int i = 0;
//   char *pch=strchr(str,*letter);
//   while (pch!=NULL) {
//     i++;
//     pch=strchr(pch+1,*letter);
//   }
  
//   printf("%d\n", i);
//   printf("--%d, %d--%d\n", leastNum, mostNum, total);
//   if(i <= mostNum && i >= leastNum){
//       total++;
//   }
//    }
//    printf("\n<<<<<<%d<<<<%d", total, count);
 