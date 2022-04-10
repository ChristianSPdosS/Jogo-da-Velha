
//CONDIÇÂO de vitória oo
//player.forma com + de 1 caractere
//Trocar os números por posições
//Mudar a forma
//Forma do 1 e do 2 não podem ser iguais



#include <stdio.h>

typedef struct Jogador{
 char nome[30];
char forma;
} t_jogador;

int main(void) {

  t_jogador player1;
t_jogador player2;

  printf("Jogador 1: digite seu nome:\n");
  scanf("%[^\n]" , player1.nome);
  printf("Digite o caractere que deseja utilizar: \n");
  getchar();
 scanf("%c" , &player1.forma);
  
  

   printf("Jogador 2: digite seu nome:\n");
  getchar();
  scanf("%[^\n]" , player2.nome);
  printf("Digite o caractere que deseja utilizar: \n");
  getchar();
scanf("%c" , &player2.forma);
  getchar();
  
  

  
  char arr[3][3];
  arr[0][0] = ' ';
  arr[0][1] = ' ';
  arr[0][2] = ' ';
  arr[1][0] = ' ';
  arr[1][1] = ' ';
  arr[1][2] = ' ';
  arr[2][0] = ' ';
  arr[2][1] = ' ';
  arr[2][2] = ' ';

  int i;
  int j;
  char xx = 'X';
  char oo = 'O';
  int v = 0;
  int a = 0;
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int a5 = 0;
  int a6 = 0;
  int a7 = 0;
  int a8 = 0;
  int a9 = 0;


  while (v != 1) {

    printf(" %c |", arr[0][0]);
    printf(" %c |", arr[0][1]);
    printf(" %c \n", arr[0][2]);
    printf("---+---+---\n");

    printf(" %c |", arr[1][0]);
    printf(" %c |", arr[1][1]);
    printf(" %c \n", arr[1][2]);
    printf("---+---+---\n");

    printf(" %c |", arr[2][0]);
    printf(" %c |", arr[2][1]);
    printf(" %c \n\n", arr[2][2]);

    printf("%s joga:\n" , player1.nome);
    int x;
    scanf("%d", &x);
    getchar();
    if (x != 1 && x != 2 && x != 3 && x != 4 && x != 5 && x != 6 && x != 7 &&
        x != 8 && x != 9) {
      printf("Casa inválida! Escolha uma das casas disponíveis:\n");
      continue;
    }

    if (x == 1) {

      if (a1 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][0] = xx;
        a1 = 1;
      }
    }

    else if (x == 2) {

      if (a2 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][1] = xx;
        a2 = 1;
      }

    }

    else if (x == 3) {

      if (a3 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[0][2] = xx;
        a3 = 1;
      }

    }

    else if (x == 4) {

      if (a4 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][0] = xx;
        a4 = 1;
      }

    }

    else if (x == 5) {
      if (a5 == 1) {
        printf("Casa inválida! Escolha uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][1] = xx;
        a5 = 1;
      }
    }

    else if (x == 6) {
      if (a6 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[1][2] = xx;
        a6 = 1;
      }
    }

    else if (x == 7) {
      if (a7 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][0] = xx;
        a7 = 1;
      }
    }

    else if (x == 8) {
      if (a8 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][1] = xx;
        a8 = 1;
      }
    }

    else if (x == 9) {
      if (a9 == 1) {
        printf("Casa inválida! Selecione uma das casas disponíveis:\n");
        continue;
      } else {
        arr[2][2] = xx;
        a9 = 1;
      }
    }

    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][2] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][2] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]  && arr[2][2] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[2][0] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[2][1] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[2][2] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

    printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2]== xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

     printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == xx) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

     printf("%s ganhou!!!" , player1.nome);
      v = 1;
      break;
    }

    else if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 == 1) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("Empate!!!");
      v = 1;
      break;
    } else

      while (1) {

        printf(" %c |", arr[0][0]);
        printf(" %c |", arr[0][1]);
        printf(" %c \n", arr[0][2]);
        printf("---+---+---\n");

        printf(" %c |", arr[1][0]);
        printf(" %c |", arr[1][1]);
        printf(" %c \n", arr[1][2]);
        printf("---+---+---\n");

        printf(" %c |", arr[2][0]);
        printf(" %c |", arr[2][1]);
        printf(" %c \n\n", arr[2][2]);

        printf("%s joga:\n" , player2.nome);
        int o;
        scanf("%d", &o);
        getchar();
        if (o != 1 && o != 2 && o != 3 && o != 4 && o != 5 && o != 6 &&
            o != 7 && o != 8 && o != 9) {
         printf("Casa inválida! Selecione uma das casas disponíveis:\n");
          continue;
        }

        if (o == 1) {

          if (a1 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][0] = oo;
            a1 = 1;
            break;
          }

        }

        else if (o == 2) {
          if (a2 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][1] = oo;
            a2 = 1;
            break;
          }
        }

        else if (o == 3) {
          if (a3 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[0][2] = oo;
            a3 = 1;
            break;
          }
        }

        else if (o == 4) {
          if (a4 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][0] = oo;
            a4 = 1;
            break;
          }
        }

        else if (o == 5) {
          if (a5 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][1] = oo;
            a5 = 1;
            break;
          }
        }

        else if (o == 6) {
          if (a6 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[1][2] = oo;
            a6 = 1;
            break;
          }
        }

        else if (o == 7) {
          if (a7 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][0] = oo;
            a7 = 1;
            break;
          }
        }

        else if (o == 8) {
          if (a8 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][1] = oo;
            a8 = 1;
            break;
          }
        }

        else if (o == 9) {
          if (a9 == 1) {
            printf("Casa inválida! Selecione uma das casas disponíveis:\n");
            continue;
          } else {
            arr[2][2] = oo;
            a9 = 1;
            break;
          }
        }
      }

    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

       printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

     printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

      printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

       printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }

    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] == oo) {

      printf(" %c |", arr[0][0]);
      printf(" %c |", arr[0][1]);
      printf(" %c \n", arr[0][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[1][0]);
      printf(" %c |", arr[1][1]);
      printf(" %c \n", arr[1][2]);
      printf("---+---+---\n");

      printf(" %c |", arr[2][0]);
      printf(" %c |", arr[2][1]);
      printf(" %c \n\n", arr[2][2]);

       printf("%s ganhou!!!" , player2.nome);
      v = 1;
      break;
    }
  }

  return 0;
}