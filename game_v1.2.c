#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define Rkey 100
#include <limits.h>


int hp_up = 1, fase_var = 1, boss_var = 1, h = 1,hp = 20,hp_inimigo = 10,countdown = 3,inimigo_hp = 1,batalha_var = 1, batalha_var_2 = 1, batalha_var_3 = 1,fase=1;


//Menu
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void change_color(int color)
{
    int color_code = 15;
    if(color <= 255 && color >= 1)
    {
        color_code = color;
    }
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, color_code);
}

void controle()
{
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
    printf("Andar para a Baixo:      %c ",25);
    gotoxy(48,15);
    printf("Andar para a Cima:       %c ",24);
    gotoxy(48,17);
    printf("Ataque Fraco:           [1]");
    gotoxy(48,19);
    printf("Ataque Forte:           [2]");
    gotoxy(48,21);
    printf("Ataqie Especial:        [3]");
    gotoxy(48,23);
    printf("Cura:                   [4]");
    gotoxy(54,26);
    printf("Voltar [ENTER]");
}
void titulo()
{
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
void sair()
{
int tecla_sair;
int opcao_sair = 1;
system("cls");
gotoxy(50,10);
printf("Deseja realmente sair?");
gotoxy(51,16);
printf("[SIM]");
gotoxy(66,16);
printf("NAO");
while(tecla_sair != 13){

    gotoxy(0,0);
    tecla_sair = getch();

    if(opcao_sair == 1){
        if (GetAsyncKeyState(VK_LEFT)&1){

        }else if (GetAsyncKeyState(VK_RIGHT)&1){
            gotoxy(51,16);
            printf(" SIM ");
            gotoxy(65,16);
            printf("[NAO]");
            opcao_sair = 2;
            }
    }if(opcao_sair == 2){
        if (GetAsyncKeyState(VK_LEFT)&1){
            gotoxy(51,16);
            printf("[SIM]");
            gotoxy(65,16);
            printf(" NAO ");
            opcao_sair = 1;

        }else if (GetAsyncKeyState(VK_RIGHT)&1){
            }
    }
}
if(opcao_sair == 1){
    h = 2;
}else if(opcao_sair == 2){
    system("cls");
    menu();
}
}
void menu()
{
system("color 0C");

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

    gotoxy(0,0);
    tecla = getch();

    if(opcao == 1){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(52,16);
            printf("  ");
            gotoxy(50,18);
            printf("  ");
            gotoxy(52,20);
            printf("->");
            opcao = 3;
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
            gotoxy(52,16);
            printf("->");
            gotoxy(50,18);
            printf("  ");
            gotoxy(52,20);
            printf("  ");
            opcao = 1;
            }
    }
}
if(opcao == 1){

    gotoxy(5,20);
    h = 3;
    return 0;

}if(opcao == 2){
    system("cls");
    controle();
    gotoxy(0,0);
    getchar();
    system("cls");


}if(opcao == 3){
    sair();


}
tecla = 1;
gotoxy(5,20);

}
void hist()
{
    system("cls");
    gotoxy(52,2);
    printf("Hist%cria",162);
    gotoxy(8,8);
    printf("Dante ex participante da igreja ocultista, se viu em um dilema ao ter que fugir com sua mulher (Donati)");
    gotoxy(8,9);
    printf("gravida para nao ter que vender sua alma para o diabo junto de sua amada.");
    gotoxy(8,10);
    printf("porem ap%cs o nascimento perturbado de seu filho com a morte de sua mulher, ele se viu em um impasse. ",162);
    gotoxy(8,11);
    printf("Logo ele tenta vender a sua alma para trazer a sua mulher a vida, sacrificando sua vida para isso. ");
    gotoxy(8,12);
    printf("Porem depois ser enganado pelo diabo e sua filha ser raptada pelo Diabo. ");
    gotoxy(8,13);
    printf("Ele tenta invadir o inferno em um ato de desespero, ");
    gotoxy(8,14);
    printf("utilizando os aprendizados e livros que ele possui graças ao culto.");

    gotoxy(38,25);
    printf("Pressione qualquer tecla para continuar.");
    gotoxy(0,0);
    getchar();
}
/*
void dialogo_velho(){
system("cls");
system("color 87");

gotoxy(15,5);
printf("___");
gotoxy(14,6);
printf("/-   -%c",92);
gotoxy(14,7);
printf("|O   O|");
gotoxy(14,8);
printf("|_>_|");
gotoxy(14,9);
printf("/     %c",92);
gotoxy(14,10);
printf("|  _  |");
gotoxy(12,11);
printf("_%c     /_",92);
gotoxy(11,12);
printf("/   %c___/   %c",92,92);
gotoxy(11,13);
printf("|           |");
gotoxy(11,14);
printf("| |       | |");
gotoxy(11,15);
printf("| |       | |");
gotoxy(11,16);
printf("||       ||");
gotoxy(11,17);
printf("()|___|()");
gotoxy(13,18);
printf("|  | |  |");
gotoxy(13,19);
printf("|  | |  |");
gotoxy(13,20);
printf("|  | |  |");
gotoxy(13,21);
printf("|  | |  |");
Sleep(500);
int t;
while(t != 6){
Beep(500, 60);
gotoxy(22,10);
printf("Oh ignobil cavalheiro,");
t++;
}
t = 1;
Sleep(3000);
while(t != 15){
Beep(500, 60);
gotoxy(22,10);
printf("O que lhe traz em direcao de tao decreptas profundezas?");
t++;
}
t = 1;
Sleep(4500);
while(t != 15){
Beep(500, 60);
gotoxy(22,10);
printf("Nao importa, pegue esta pungente espada para proteger-lhe em sua turbulenta jornada");
gotoxy(26,14);
printf("           /%c",92);
gotoxy(26,15);
printf(" _         )( ________");
gotoxy(26,16);
printf("()///////(  )_______>");
gotoxy(26,17);
printf("           )(");
gotoxy(26,18);
printf("           %c/",92);
t++;
}
t = 1;
Sleep(4000);
while(t != 10){
Beep(500, 60);
gotoxy(22,10);
printf("nunca esqueça o nome dela que e Virgilio!                                             ");
t++;
}
Sleep(4000);
gotoxy(22,10);
printf("                                                                                      ");
Sleep(2000);
}
*/
//Game
void atk_boss()
{

//gera um numero aleatorio entre 0 - 3
    srand(time(0));
    int val_atk = rand() % 5;

//ataque do inimigo de acordo com o valor gerado na variavel (val_atk)

//atk simples caso a variavel esteja em 0
    if(val_atk == 0){

        hp = hp-2;
        boss_atk_0();
        Sleep(200);
        boss_atk_0();
        gotoxy(41,18);
        printf("O INIMIGO UTILIZOU UM ATAQUE SIMPLES");
//atk forte caso a variavel esteja em 1
    }else if(val_atk == 1){

        hp = hp-4;
        boss_atk_1();
        gotoxy(43,18);
        printf("O INIMIGO UTILIZOU UM ATAQUE FORTE");
//defesa caso a variavel esteja em 2
    }else if(val_atk == 2){

            hp_inimigo = hp_inimigo+3;
            boss_atk_0();
            gotoxy(56,18);
        printf("O BOSS SE CUROU");
//inimigo não faz caso a variavel esteja em 3
        }else if(val_atk == 3){

        boss_atk_0();
        gotoxy(56,18);
        printf("O INIMIGO N/ FEZ NADA");
    }


}
void boss()
{
    int a;
    int k;

    int opcao = 1, tecla;


    system("cls");
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(0, a);
  }
//Parede horizontal superior
    for(a = 1; a < 120; a++){
    printf("%c",219);
    gotoxy(a, 0);
  }

//Parede horizontal inferior
    for(a = 1; a < 120; a++){
    printf("%c",219);
    gotoxy(a, 23);
  }

//Parede canto direito
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(79, a);
  }
//menu
    for(a = 1; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 16);
  }
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(119, a);
    }
  //Ataque
    gotoxy(6,7);
    gotoxy(85,2);
    printf("Ataque Basico: 1 ATK");
    gotoxy(85,4);
    printf ("Ataque Forte: 2 ATK");

    gotoxy(85,6);
    printf("Ataque Especial: 4 ATK");
    gotoxy(85,8);
    printf ("Recuperar vida");

    personagem_atk_0();

    if(countdown <= 0){
    gotoxy(82,12);
    printf ("Countdown do 'Ataque Especial' - [0]");
    }else{
    gotoxy(82,12);
    printf("Countdown do 'Ataque Especial' - [%d]", countdown);
    }



//loop batalha

while(hp_inimigo > 0){
  boss_atk_0();
  gotoxy(61,21);
  printf ("HP BOSS: %d/20 ",hp_inimigo);
  gotoxy(3,3);
  atk_boss();
  gotoxy(3,21);
  printf("HP: %d/20",hp);
  gotoxy(3,18);
  printf("[                             ]");


gotoxy(81,2);
printf("->");

while(tecla != 13){

    gotoxy(0,0);
    tecla = getch();

    if(opcao == 1){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("->");
            opcao = 4;
        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("->");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 2;
            }
    }if(opcao == 2){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("->");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 1;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("->");
            gotoxy(81,8);
            printf("  ");

            opcao = 3;
            }
    }if(opcao == 3){

            if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("->");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 2;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("->");
            opcao = 4;
        }
            }if (opcao == 4){

            if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("->");
            gotoxy(81,8);
            printf("  ");
            opcao = 3;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("->");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 1;
            }

    }
}



  if(opcao == 1){
    gotoxy(3,18);
    printf("[  DANTE DEU UM ATAQUE FRACO  ]");
    countdown--;
    hp_inimigo--;
    boss_atk_0();
    personagem_atk_1();
    gotoxy(61,21);
    printf ("HP BOSS: %d/20 ",hp_inimigo);
    gotoxy(19,25);

    system("pause");
    boss();
    system("cls");

  }else if(opcao == 2){
    gotoxy(3,18);
    printf("[  DANTE DEU UM ATAQUE FORTE  ]");
    countdown--;
    boss_atk_0();
    hp_inimigo = hp_inimigo-2;
    personagem_atk_2();
    gotoxy(61,21);
    printf ("HP BOSS: %d/20 ",hp_inimigo);
    gotoxy(19,25);

    system("pause");
    boss();
    system("cls");

  }else if(opcao == 4){
    gotoxy(3,18);
    printf("[      DANTE SE CUROU         ]");
    boss_atk_0();
    personagem_cura();
    countdown--;
    if(hp >= 20){
        gotoxy(3,19);
        printf("A sua vida encontra-se cheia");
        gotoxy(19,25);
    }else{
        hp = hp + 4;
    }
    gotoxy(61,21);
    printf ("HP BOSS: %d/20 ",hp_inimigo);
    gotoxy(19,25);

    system("pause");
    boss();
    system("cls");


  }else if(opcao == 3){
    gotoxy(3,18);
    printf("[DANTE DEU UM ATAQUE ESPECIAL ]");
    boss_atk_0();
    if(countdown <= 0){
        hp_inimigo = hp_inimigo-4;
        personagem_atk_4();
        countdown = 3;
        gotoxy(61,21);
        printf ("HP INIMIGP: %d/10 ",hp_inimigo);
        gotoxy(19,25);
    }else{
        gotoxy(3,19);
        printf("A habilidade esta em countdown, espere mais %d rodadas",countdown);
        gotoxy(19,25);
    }

    system("pause");
    boss();
    system("cls");
        }else{
        gotoxy(3,22);
        printf("Ataque n/ existente               ");
        gotoxy(19,24);
        system("pause");
        batalha();
        system("cls");
        }
    hp = 20;
    circulo1();
        }
    }
void sprite_inimigo_circulo1()
{
//função para os inimigos aparecerem no cenário

    if(hp_up == 1){
    gotoxy(30,12);
    printf("%c",3);
    }else if(hp_up == 0){
    gotoxy(30,12);
    printf(" ");
    }
    if(batalha_var == 0){
    gotoxy(20, 21);
    printf(" ");
    }if(batalha_var == 1){
    gotoxy(20, 21);
    printf("%c",190);
    }if(batalha_var_2 == 0){
    gotoxy(40, 2);
    printf(" ");
    }if(batalha_var_2 == 1){
    gotoxy(40, 2);
    printf("%c",190);
    }if(batalha_var_3 == 0){
    gotoxy(60, 21);
    printf(" ");
    }if(batalha_var_3 == 1){
    gotoxy(60, 21);
    printf("%c",190);
    }
if(boss_var == 1){
change_color(132);
gotoxy(67,3);
printf("/%c__/%c",92,92);
gotoxy(66,4);
printf("| %c  / |",92);
gotoxy(66,5);
printf("| 0  0 |");
gotoxy(67,6);
printf("%c .. /",92);
gotoxy(68,7);
printf("%c__/",92);
change_color(135);
}else if(boss_var == 0){

gotoxy(67,3);
printf("            ",92,92);
gotoxy(66,4);
printf("            ",92);
gotoxy(66,5);
printf("            ");
gotoxy(67,6);
printf("            ",92);
gotoxy(68,7);
printf("            ",92);
}
}
void circulo1()
{
if(fase_var == 1){
  system("color 87");
  int a;
  gotoxy(50, 50);
  printf("%c",130);

//

  for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(0, a);
  }
//Parede horizontal superior
    for(a = 0; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 0);
  }

//Parede horizontal inferior
    for(a = 0; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 23);
  }

//sala1
//Parede vertical direita 1
  for(a = 1; a < 20; a++){
    printf("%c",219);
    gotoxy(20, a);

  }
//Sala 2
//Parede vertical direita 2
  for(a = 4; a < 24; a++){
    printf("%c",219);
    gotoxy(40, a);
  }
//Sala 3
//Parede vertical direita 3
  for(a = 1; a < 20; a++){
    printf("%c",219);
    gotoxy(60, a);
  }
//Parede canto direito
  for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(79, a);
  }
}else if(fase_var == 2){
    system("cls");
    system("color 23");
}

}
void atk_inimigo()
{
//rng para o ataque do inimigo
//gera um numero aleatorio entre 0 - 3
    srand(time(0));
    int val_atk = rand() % 4;

//ataque do inimigo de acordo com o valor gerado na variavel (val_atk)

//atk simples caso a variavel esteja em 0
    if(val_atk == 0){

        hp--;
        inimigo_atk_0();
        Sleep(200);
        inimigo_atk_1();
        gotoxy(41,18);
        printf("O INIMIGO UTILIZOU UM ATAQUE SIMPLES");
//atk forte caso a variavel esteja em 1
    }else if(val_atk == 1){

        hp = hp-3;
        inimigo_atk_0();
        inimigo_atk_2();
        gotoxy(43,18);
        printf("O INIMIGO UTILIZOU UM ATAQUE FORTE");
//defesa caso a variavel esteja em 2
    }else if(val_atk == 2){

            hp_inimigo++;
            inimigo_atk_0();
            inimigo_def();
            gotoxy(56,18);
        printf("O INIMIGO SE DEFENDEU");
//inimigo não faz caso a variavel esteja em 3
        }else if(val_atk == 3){

        gotoxy(56,18);
        printf("O INIMIGO N/ FEZ NADA");
    }


}
void personagem()
{



    int x,a,d=2,cx[300]={2,2},cy[300]={2,2},t=1;
    char tecla='a';
    char run;
    gotoxy(2,2);
    printf("%c",219);

    while(tecla != 's')
    {
        sprite_inimigo_circulo1();

        while(tecla != 's' &&! (tecla=kbhit()))
        {
            //Apaga o caractere de traz
            for(x = t; x > 0; x--)
            {
                cx[x] = cx[x-1];
                cy[x] = cy[x-1];
            }
            //Bug personagem anda em qualquer tecla
            //Movimentação
             gotoxy(0,0);
             run=getch();

             if(d==0)cx[0]--;
             if(d==1)cy[0]--;
             if(d==2)cx[0]++;
             if(d==3)cy[0]++;


             gotoxy(cx[t],cy[t]);
             printf(" ");
             gotoxy(cx[0],cy[0]);
             printf("%c",219);

            //Velocidade
             Sleep(50);

            //Colisão Limite
             if(cy[0]==23)cy[0]--;
             if(cx[0]==79)cx[0]--;
             if(cy[0]==0)cy[0]++;
             if(cx[0]==0)cx[0]++;


             if(fase == 1){
             //paredes internas
             if(cx[0]==20){
                if(cy[0]>=1 && cy[0]<=19){

                    if(d == 2){cx[0]--;}
                    if(d == 0){cx[0]++;}
                }
             }
             if(cx[0]==40){
                if(cy[0]>=4 && cy[0]<=24){

                    if(d == 2){cx[0]--;}
                    if(d == 0){cx[0]++;}
                }
             }
            if(cx[0]==60){
                if(cy[0]>=1 && cy[0]<=19){

                    if(d == 2){cx[0]--;}
                    if(d == 0){cx[0]++;}
                }
             }


                if(cy[0]==2){
                if(cx[0]>=60 && cx[0]<=70){fase = 2;}
            }

        //Ativador inimigo 1
             if(batalha_var == 1){

                if(cx[0]==20){
                    if(cy[0]>=19 && cy[0]<=22){batalha(); batalha_var = 0; }
                }
             }
        //Ativador inimigo 2
             if(batalha_var_2 == 1){
                if(cx[0]==40){hp_inimigo = 10;batalha(); batalha_var_2 = 0;}
             }
        //Ativador inimigo 3
             if(batalha_var_3 == 1){
                if(cx[0]==60){hp_inimigo = 10;batalha(); batalha_var_3 = 0;}
             }
        //Ativador boss

         if(boss_var == 1){
            if(cy[0]==9){
                if(cx[0]>=60 && cx[0]<=70){hp_inimigo = 2; boss(); boss_var = 0;}
            }
         }

         //ativador  cura
         if(hp_up == 1){
            if(cx[0]== 30 ){
                    if(cy[0] == 12){
                        hp = 20;
                        hp_up = 0;
                    }
                }
         }

        }else if(fase == 2){fase_var = 2; circulo1(); cx[0] = 2; cy[0] = 2; fase = 0;}
    }

         if(tecla!='s')tecla=getch();
         if(tecla=='K')d=0;
         if(tecla=='H')d=1;
         if(tecla=='M')d=2;
         if(tecla=='P')d=3;
         //Limite Tela
         if(cy[0]==0||cy[0]==23||cx[0]==0||cx[0]==79)tecla='s';

    }


}
void personagem_atk_0()
{
    gotoxy(8,2);
    printf("_______");
    gotoxy(7,3);
    printf("/ _____ %c",92);
    gotoxy(6,4);
    printf("| |~   ~| |");
    gotoxy(6,5);
    printf("| |0   0| |");
    gotoxy(6,6);
    printf("|_|  >  |_|");
    gotoxy(8,7);
    printf("%c  _  /",92);
    gotoxy(9,8);
    printf("%c___/",92);
    gotoxy(6,9);
    printf("___|   |___");
    gotoxy(5,10);
    printf("/           %c",92);
    gotoxy(5,11);
    printf("|           |");
    gotoxy(5,12);
    printf("| |       | |");
    gotoxy(5,13);
    printf("|_|       | |");
    gotoxy(5,14);
    printf("()|_______|()");
    gotoxy(7,15);
    printf("|  | |  |");

}
void personagem_atk_1()
{
    gotoxy(8,2);
    printf("_______        / %c",92);
    gotoxy(7,3);
    printf("/ _____ %c       | |",92);
    gotoxy(6,4);
    printf("| |%c   /| |      |.|",92);
    gotoxy(6,5);
    printf("| |0   0| |      |.|");
    gotoxy(6,6);
    printf("|_|  >  |_|      |:|");
    gotoxy(8,7);
    printf("%c  _  /        |:|",92);
    gotoxy(9,8);
    printf("%c___/        ==8==",92);
    gotoxy(6,9);
    printf("___|   |__________8");
    gotoxy(5,10);
    printf("/          ________8");
    gotoxy(5,11);
    printf("|         |        0");
    gotoxy(5,12);
    printf("| |       |    ");
    gotoxy(5,13);
    printf("|_|       |    ");
    gotoxy(5,14);
    printf("()|_______|    ");
    gotoxy(7,15);
    printf("|  | |  |");
}
void personagem_atk_2()
{
    gotoxy(8,2);
    printf("_______        / %c",92);
    gotoxy(7,3);
    printf("/ _____ %c      ~| |   ",92);
    gotoxy(6,4);
    printf("| |%c   /| |    ~~|.|  ",92);
    gotoxy(6,5);
    printf("| |0   0| |   ~~~|.|   ");
    gotoxy(6,6);
    printf("|_|  >  |_|    ~~|:|   ");
    gotoxy(8,7);
    printf("%c  _  /       ~|:|",92);
    gotoxy(9,8);
    printf("%c___/        ==8==",92);
    gotoxy(6,9);
    printf("___|   |__________8");
    gotoxy(5,10);
    printf("/          ________8");
    gotoxy(5,11);
    printf("|         |        0");
    gotoxy(5,12);
    printf("| |       |    ");
    gotoxy(5,13);
    printf("|_|       |    ");
    gotoxy(5,14);
    printf("()|_______|    ");
    gotoxy(7,15);
    printf("|  | |  |");
}
void personagem_atk_4()
{
    gotoxy(8,2);
    printf("_______        / %c",92);
    gotoxy(7,3);
    printf("/ _____ %c    (  | |  )",92);
    gotoxy(6,4);
    printf("| |%c   /| |    ( |.| )",92);
    gotoxy(6,5);
    printf("| |0   0| |     (|.|)");
    gotoxy(6,6);
    printf("|_|  >  |_|      |:|");
    gotoxy(8,7);
    printf("%c  _  /        |:|",92);
    gotoxy(9,8);
    printf("%c___/        ==8==",92);
    gotoxy(6,9);
    printf("___|   |__________8");
    gotoxy(5,10);
    printf("/          ________8");
    gotoxy(5,11);
    printf("|         |        0");
    gotoxy(5,12);
    printf("| |       |    ");
    gotoxy(5,13);
    printf("|_|       |    ");
    gotoxy(5,14);
    printf("()|_______|    ");
    gotoxy(7,15);
    printf("|  | |  |");
}
void personagem_cura()
{
    gotoxy(8,2);
    printf("_______             ",92);
    gotoxy(7,3);
    printf("/ _____ %c          ",92);
    gotoxy(6,4);
    printf("| |~   ~| |        ",92);
    gotoxy(6,5);
    printf("| |0   0| |          _");
    gotoxy(6,6);
    printf("|_|  >  |_|         (_)");
    gotoxy(8,7);
    printf("%c  _  /           | |",92);
    gotoxy(9,8);
    printf("%c___/            | |",92);
    gotoxy(6,9);
    printf("___|   |___________/   %c",92);
    gotoxy(5,10);
    printf("/          ________/~~~~~%c",92);
    gotoxy(5,11);
    printf("|         |        %c_____/",92);
    gotoxy(5,12);
    printf("| |       |    ");
    gotoxy(5,13);
    printf("|_|       |    ");
    gotoxy(5,14);
    printf("()|_______|    ");
    gotoxy(7,15);
    printf("|  | |  |");
}
void inimigo_atk_0()
{
    gotoxy(50,7);
    printf("           __/%c___/%c",92,92);
    gotoxy(49,8);
    printf("           /o%c  /o   |",92);
    gotoxy(48,9);
    printf("           /______    |");
    gotoxy(49,10);
    printf("           vvvv /    /");
    gotoxy(49,11);
    printf("           -^^^/    /|____");
    gotoxy(49,12);
    printf("           %c_______/      %c",92,92);
    gotoxy(49,13);
    printf("           |  |        |  |");
    gotoxy(49,14);
    printf("           |  |        |  |");
    gotoxy(49,15);
    printf("           |  |        |  |");
}
void inimigo_atk_1()
{
    gotoxy(50,7);
    printf("           __/%c___/%c",92,92);
    gotoxy(49,8);
    printf("           /o%c  /o   |",92);
    gotoxy(48,9);
    printf("           /______    |");
    gotoxy(49,10);
    printf("           vvvv /    /");
    gotoxy(49,11);
    printf("           -^^^/    /|____");
    gotoxy(49,12);
    printf("   <%c______%c_______/      %c",92,92,92);
    gotoxy(49,13);
    printf("   < _________|        |  |",92);
    gotoxy(49,14);
    printf("   </         |        |  |");
    gotoxy(49,15);
    printf("              |        |  |");
}
void inimigo_atk_2()
{
    gotoxy(50,7);
    printf("   .       __/%c___/%c",92,92);
    gotoxy(49,8);
    printf("   / %c     /o%c  /o   |",92,92);
    gotoxy(48,9);
    printf("    | |    /______    |");
    gotoxy(49,10);
    printf("   | |     vvvv /    /");
    gotoxy(49,11);
    printf("   | |     -^^^/    /|____");
    gotoxy(49,12);
    printf("    8______%c_______/      %c",92,92);
    gotoxy(49,13);
    printf("    8_________|        |  |");
    gotoxy(49,14);
    printf("    O         |        |  |");
    gotoxy(49,15);
    printf("              |        |  |");
}
void inimigo_def()
{
    gotoxy(50,7);
    printf("           __/%c___/%c",92,92);
    gotoxy(49,8);
    printf("     _____ /o%c  /o   |",92);
    gotoxy(48,9);
    printf("    _/     %c_ ____    |",92);
    gotoxy(49,10);
    printf("  /         %cvv /    /",92);
    gotoxy(49,11);
    printf("  |    _    |^^/    /|__");
    gotoxy(49,12);
    printf("  |   / %c   |______/      %c",92,92);
    gotoxy(49,13);
    printf("  |   | |   |          |  |");
    gotoxy(49,14);
    printf("  |   %c_/   |          |  |",92);
    gotoxy(49,15);
    printf("  |         |          |  |");
}
void boss_atk_0()
{
    gotoxy(53,2);
    printf("/^%c      /^%c ",92,92);
    gotoxy(52,3);
    printf(" |  %c    /  |",92);
    gotoxy(51,4);
    printf(" ||%c %c.  ./ /||",92,92);
    gotoxy(52,5);
    printf("()'%c%c    //`()",92,92);
    gotoxy(52,6);
    printf(",;`wo%c  /ow';,",92);
    gotoxy(52,7);
    printf(";,  ) __ (  ,;");
    gotoxy(52,8);
    printf(" ;  %c(%c/)/  ;;",92,92);
    gotoxy(52,9);
    printf(";|  |vwwv|   ; ``-..");
    gotoxy(52,10);
    printf(" ;  `lwwl'   ;      ```''-.");
    gotoxy(52,11);
    printf(";| ; `""'   ; ;  ");
    gotoxy(52,12);
    printf(" ;;  '''' ;;   ");
    gotoxy(52,13);
    printf("  ; ;. '  .;  ");
    gotoxy(52,14);
    printf("  ;  ;..;    ");
    gotoxy(52,15);
    printf("   ;  ;;  ");
}
void boss_atk_1()
{
    gotoxy(53,2);
    printf("                           ");
    gotoxy(52,3);
    printf("                           ");
    gotoxy(51,4);
    printf("                           ");
    gotoxy(52,5);
    printf("                           ");
    gotoxy(52,6);
    printf("                           ");
    gotoxy(52,7);
    printf("                           ");
    gotoxy(52,8);
    printf("                           ");
    gotoxy(52,9);
    printf("                           ");
    gotoxy(52,10);
    printf("                           ");
    gotoxy(52,11);
    printf("       \____________/      ");
    gotoxy(52,12);
    printf("                           ");
    gotoxy(52,13);
    printf("                           ");
    gotoxy(52,14);
    printf("                           ");
    gotoxy(52,15);
    printf("                           ");
}
void batalha()
{

    int a;
    int k;

    int opcao = 1, tecla;


    system("cls");
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(0, a);
  }
//Parede horizontal superior
    for(a = 1; a < 120; a++){
    printf("%c",219);
    gotoxy(a, 0);
  }

//Parede horizontal inferior
    for(a = 1; a < 120; a++){
    printf("%c",219);
    gotoxy(a, 23);
  }

//Parede canto direito
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(79, a);
  }
//menu
    for(a = 1; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 16);
  }
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(119, a);
    }
  //Ataque
    gotoxy(6,7);
    gotoxy(85,2);
    printf("Ataque Basico: 1 ATK");
    gotoxy(85,4);
    printf ("Ataque Forte: 2 ATK");

    gotoxy(85,6);
    printf("Ataque Especial: 4 ATK");
    gotoxy(85,8);
    printf ("Recuperar vida");

    personagem_atk_0();

    if(countdown <= 0){
    gotoxy(82,12);
    printf ("Countdown do 'Ataque Especial' - [0]");
    }else{
    gotoxy(82,12);
    printf("Countdown do 'Ataque Especial' - [%d]", countdown);
    }



//loop batalha

while(hp_inimigo > 0){
  inimigo_atk_0();
  gotoxy(61,21);
  change_color(132);
  printf ("HP INIMIGP: %d/10 ",hp_inimigo);
  change_color(135);
  gotoxy(3,3);
  atk_inimigo();
  gotoxy(3,21);
  change_color(132);
  printf("HP: %d/20",hp);
  change_color(135);

  gotoxy(3,18);
  printf("[                             ]");


gotoxy(81,2);
printf("->");

while(tecla != 13){

    gotoxy(0,0);
    tecla = getch();

    if(opcao == 1){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("->");
            opcao = 4;
        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("->");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 2;
            }
    }if(opcao == 2){
        if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("->");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 1;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("->");
            gotoxy(81,8);
            printf("  ");

            opcao = 3;
            }
    }if(opcao == 3){

            if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("->");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 2;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("->");
            opcao = 4;
        }
            }if (opcao == 4){

            if (GetAsyncKeyState(VK_UP)&1){
            gotoxy(81,2);
            printf("  ");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("->");
            gotoxy(81,8);
            printf("  ");
            opcao = 3;

        }else if (GetAsyncKeyState(VK_DOWN)&1){
            gotoxy(81,2);
            printf("->");
            gotoxy(81,4);
            printf("  ");
            gotoxy(81,6);
            printf("  ");
            gotoxy(81,8);
            printf("  ");
            opcao = 1;
            }

    }
}



  if(opcao == 1){
    gotoxy(3,18);
    printf("[  DANTE DEU UM ATAQUE FRACO  ]");
    countdown--;
    hp_inimigo--;
    personagem_atk_1();
    gotoxy(61,21);
    change_color(132);
    printf ("HP INIMIGP: %d/10 ",hp_inimigo);
    change_color(135);
    gotoxy(19,25);

    system("pause");
    batalha();
    system("cls");

  }else if(opcao == 2){
    gotoxy(3,18);
    printf("[  DANTE DEU UM ATAQUE FORTE  ]");
    countdown--;
    hp_inimigo = 0;
    personagem_atk_2();
    gotoxy(61,21);
    change_color(132);
    printf ("HP INIMIGP: %d/10 ",hp_inimigo);
    change_color(135);
    gotoxy(19,25);

    system("pause");
    batalha();
    system("cls");

  }else if(opcao == 4){
    gotoxy(3,18);
    printf("[      DANTE SE CUROU         ]");
    personagem_cura();
    countdown--;
    if(hp >= 20){
        gotoxy(3,19);
        printf("A sua vida encontra-se cheia");
        gotoxy(19,25);
    }else{
        hp = hp + 4;
    }
    gotoxy(61,21);
    change_color(132);
    printf ("HP INIMIGP: %d/10 ",hp_inimigo);
    change_color(135);
    gotoxy(19,25);

    system("pause");
    batalha();
    system("cls");


  }else if(opcao == 3){
    gotoxy(3,18);
    printf("[DANTE DEU UM ATAQUE ESPECIAL ]");
    if(countdown <= 0){
        hp_inimigo = hp_inimigo-4;
        personagem_atk_4();
        countdown = 3;
        gotoxy(61,21);
        change_color(132);
        printf ("HP INIMIGP: %d/10 ",hp_inimigo);
        change_color(135);
        gotoxy(19,25);
    }else{
        gotoxy(3,19);
        printf("A habilidade esta em countdown, espere mais %d rodadas",countdown);
        gotoxy(19,25);
    }

    system("pause");
    batalha();
    system("cls");
        }else{
        gotoxy(3,22);
        printf("Ataque n/ existente               ");
        gotoxy(19,24);
        system("pause");
        batalha();
        system("cls");
        }
    hp = 20;
    circulo1();
        }
    }
int main()
{
    SetConsoleTitle(" THE UNBORN ");
    system("mode con cols=120 lines=28");
    do{
    menu();
    }while(h == 1);
    if(h == 2){
        gotoxy(10,25);
        return;
    }if(h == 3){
        hist();

    }

    system("cls");
    circulo1();
    circulo1();
    personagem();
    getchar();
}
