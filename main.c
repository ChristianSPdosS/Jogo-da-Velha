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
  int v= 0;
  
while(v !=1){
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
    arr[0][1]= xx;
  }
   else if(x==3){
    arr[0][2]= xx;
  }
   else if(x==4){
    arr[1][0]= xx;
  }
   else if(x==5){
    arr[1][1]= xx;
  }
   else if(x==6){
    arr[1][2]= xx;
  }
   else if(x==7){
    arr[2][0]= xx;
  }
   else if(x==8){
    arr[2][1]= xx;
  }
   else if(x==9){
    arr[2][2]= xx;
  }

  if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][1] == arr[1][1] && arr[1][0] == arr[2][1]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
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
    printf("X ganhou!!!");
    v= 1;
    break;
  }

     
  
  else

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

  printf("O joga:\n");
  int o;
  scanf("%d" , &o);

  if(o==1){
     arr[0][0]= oo;
  }
  else if(o==2){
    arr[0][1]= oo;
  }
   else if(o==3){
    arr[0][2]= oo;
  }
   else if(o==4){
    arr[1][0]= oo;
  }
   else if(o==5){
    arr[1][1]= oo;
  }
   else if(o==6){
    arr[1][2]= oo;
  }
   else if(o==7){
    arr[2][0]= oo;
  }
   else if(o==8){
    arr[2][1]= oo;
  }
   else if(o==9){
    arr[2][2]= oo;
  }
  
  if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][1] == arr[1][1] && arr[1][0] == arr[2][1]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

  else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }

   else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
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
    printf("O ganhou!!!");
    v= 1;
    break;
  }
  }
  
  
  return 0;
}