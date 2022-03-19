#include <stdio.h>

int main(void) {

 char arr[3][3];
  arr[0][0]= '1';
   arr[0][1]= '2';
   arr[0][2]= '3';
   arr[1][0]= '4';
   arr[1][1]= '5';
   arr[1][2]= '6';
   arr[2][0]= '7';
   arr[2][1]= '8';
   arr[2][2]= '9';

  int i;
  int j;
  char xx= 'X';
  char oo= 'O';

  for(j=0; j<3; j++){
    printf("%c  " , arr[0][j]);
  }
   printf("\n");
  for(j=0; j<3; j++){
    printf("%c  " , arr[1][j]);
  }
   printf("\n");
for(j=0; j<3; j++){
    printf("%c  " , arr[2][j]);
  }
   printf("\n");

  printf("X joga:\n");
  int x;
  scanf("%d" , &x);

  if(x==1){
     arr[0][0]= xx;
  }
  else if(x==2){
    a
  }
  
  
  
  return 0;
}