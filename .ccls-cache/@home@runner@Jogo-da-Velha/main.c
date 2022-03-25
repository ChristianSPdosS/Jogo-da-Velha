#include <stdio.h>
//empate


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
  int a= 0;
    int a1= 0;
    int a2= 0;
    int a3= 0;
    int a4= 0;
    int a5= 0;
    int a6= 0;
    int a7= 0;
    int a8= 0;
    int a9= 0;
  int w=1;
  
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

    if(a1==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][0]= xx;
      a1= 1;
        }
  }
    
  else if(x==2){
    
     if(a2==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][1]= xx;
      a2= 1;
        }
   
  }
    
   else if(x==3){
   
      if(a3==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][2]= xx;
      a3= 1;
        }
   
  }
     
   else if(x==4){
    
     if(a4==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][0]= xx;
      a4= 1;
        }
  
  }
     
   else if(x==5){
    if(a5==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][1]= xx;
      a5= 1;
        }
  }
     
   else if(x==6){
     if(a6==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][2]= xx;
      a6= 1;
        }
  }
     
   else if(x==7){
    if(a7==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][0]= xx;
      a7= 1;
        }
  }
     
   else if(x==8){
     if(a8==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][1]= xx;
      a8= 1;
        }
  }
     
   else if(x==9){
    if(a9==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][2]= xx;
      a9= 1;
        }
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

  else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
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
     else if(a1==a2==a3==a4==a5==a6==a7==a8==a9==1){
       printf("Empate!!!");
       v=1;
       break;
     }
else
     
while(1){
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
     
   if(a1==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][0]= oo;
      a1= 1;
      break;
        }
     
    }
    
  else if(o==2){
   if(a2==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][1]= oo;
      a2= 1;
      break;
        }
  }
    
   else if(o==3){
    if(a3==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[0][2]= oo;
      a3= 1;
      break;
        }
  }
     
   else if(o==4){
   if(a4==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][0]= oo;
      a4= 1;
      break;
        }
  }
     
   else if(o==5){
   if(a5==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][1]= oo;
      a5= 1;
      break;
        }
  }
     
   else if(o==6){
    if(a6==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[1][2]= oo;
      a6= 1;
      break;
        }
  }
     
   else if(o==7){
    if(a7==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][0]= oo;
      a7= 1;
      break;
        }
  }
     
   else if(o==8){
    if(a8==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][1]= oo;
      a8= 1;
      break;
        }
  }
     
   else if(o==9){
   if(a9==1){
     printf("Essa casa já foi escolhida, escolha outra!\n");
  continue;
    }
    else{
     arr[2][2]= oo;
      a9= 1;
      break;
        }
  }
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

  else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
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