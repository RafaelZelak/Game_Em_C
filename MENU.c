#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int i= 1;
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void controle(){
    gotoxy(37,2);
    printf("%c%c%c%c %c%c%c%c %c%c  %c %c%c%c%c%c %c%c%c%c %c%c%c%c %c   %c%c%c%c %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(37,3);
    printf("%c    %c  %c %c %c %c   %c   %c  %c %c  %c %c   %c    %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(37,4);
    printf("%c    %c  %c %c %c %c   %c   %c%c%c%c %c  %c %c   %c%c%c  %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(37,5);
    printf("%c    %c  %c %c %c %c   %c   %c %c  %c  %c %c   %c       %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(37,6);
    printf("%c%c%c%c %c%c%c%c %c  %c%c   %c   %c  %c %c%c%c%c %c%c%c %c%c%c%c %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

    gotoxy(48,9);
    printf("Andar para a Direita:   ->");
    gotoxy(48,11);
    printf("Andar para a Esquerda:  <-");
    gotoxy(48,13);
    printf("Andar para a Baixo:      %c ",24);
    gotoxy(48,15);
    printf("Andar para a Cima:       %c ",25);
    gotoxy(48,17);
    printf("Ataque Fraco:           [1]");
    gotoxy(48,19);
    printf("Ataque Forte:           [2]");
    gotoxy(48,21);
    printf("Ataqie Especial:        [3]");
    gotoxy(48,23);
    printf("Defesa:                 [4]");
    gotoxy(54,26);
    printf("Voltar [ENTER]");
}
void titulo(){
    gotoxy(49,2);
    printf("%c%c%c%c%c %c  %c %c%c%c%c",219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(49,3);
    printf("  %c   %c  %c %c",219,219,219,219);
    gotoxy(49,4);
    printf("  %c   %c%c%c%c %c%c%c",219,219,219,219,219,219,219,219);
    gotoxy(49,5);
    printf("  %c   %c  %c %c",219,219,219,219);
    gotoxy(49,6);
    printf("  %c   %c  %c %c%c%c%c",219,219,219,219,219,219,219);

    gotoxy(42,8);
    printf("%c  %c %c%c  %c %c%c%c  %c%c%c%c %c%c%c%c %c%c  %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(42,9);
    printf("%c  %c %c %c %c %c  %c %c  %c %c  %c %c %c %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(42,10);
    printf("%c  %c %c %c %c %c%c%c  %c  %c %c%c%c%c %c %c %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(42,11);
    printf("%c  %c %c %c %c %c  %c %c  %c %c %c  %c %c %c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(42,12);
    printf("%c%c%C%c %c  %c%c %c%c%c  %c%c%c%c %c  %c %c  %c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}
void menu(){
char tecla, exit;
int opcao = 1;

titulo();

gotoxy(55,16);
printf("Jogar");
gotoxy(53,18);
printf("Controles");
gotoxy(55,20);
printf("Sair");

gotoxy(52,16);
printf("->");

while(tecla != 13){

    gotoxy(0,29);
    tecla = getch();

    if(opcao == 1){
        if (GetAsyncKeyState(VK_UP)&1){
            //Primeira opção
        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(52,16);
            printf("  ");
            gotoxy(50,18);
            printf("->");
            gotoxy(52,20);
            printf("  ");
            opcao = 2;
            }
    }if(opcao == 2){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(52,16);
            printf("->");
            gotoxy(50,18);
            printf("  ");
            gotoxy(52,20);
            printf("  ");
            opcao = 1;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(52,16);
            printf("  ");
            gotoxy(50,18);
            printf("  ");
            gotoxy(52,20);
            printf("->");
            opcao = 3;
            }
    }if(opcao == 3){

            if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(52,16);
            printf("  ");
            gotoxy(50,18);
            printf("->");
            gotoxy(52,20);
            printf("  ");
            opcao = 2;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            //Ultima opção
            }
    }
}
if(opcao == 1){
    system("cls");
    gotoxy(2,2);
    printf("Yes");

    gotoxy(5,20);

    system("cls");
}if(opcao == 2){
    system("cls");
    controle();
    gotoxy(5,20);
    getchar();
    system("cls");

}if(opcao == 3){
    i = 2;
    gotoxy(5,20);
    getchar();
}
tecla = 1;
gotoxy(5,20);
getchar();

}

int main(void)
{
system("color 04");

do{
    menu();
}while(i == 1);

return 0;
}
