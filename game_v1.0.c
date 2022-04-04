#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define Rkey 100
#include <limits.h>

int boss_var = 0, h = 1,hp = 20,hp_inimigo = 10,countdown = 3,inimigo_hp = 1,batalha_var = 1, batalha_var_2 = 1, batalha_var_3 = 1;


//Menu
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
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
    printf("Defesa:                 [4]");
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
void menu()
{
system("color 04");

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

    gotoxy(5,20);
    h = 3;
    return 0;

}if(opcao == 2){
    system("cls");
    controle();
    gotoxy(5,20);
    getchar();
    system("cls");


}if(opcao == 3){
    h = 2;
    return 0;
    gotoxy(5,20);
    getchar();
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
    gotoxy(0,29);
    getchar();
}
//Game
void boss()
{
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

}
void sprite_inimigo_circulo1()
{


    gotoxy(30,12);
    printf("%c",3);
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









}
void circulo1()
{

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
    for(a = 1; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 0);
  }

//Parede horizontal inferior
    for(a = 1; a < 80; a++){
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

}
void npc_velh_1()
{
    gotoxy(13,6);
    printf("%c",2);
    gotoxy(0,7);
    printf("Oh ignobil cavalheiro o que lhe traz em direcao de tao decreptas profundezas\npegue esta pungente espada para proteger-lhe em sua turbulenta jornada\nnunca esqueça o nome dela que e Virgilio.\n\n");
    system("pause");
    system("cls");
    gotoxy(13,6);
    printf("%c",2);


    gotoxy(50, 50);
    printf("%c",130);
}
void atk_inimigo()
{

    srand(time(0));
    int val_atk = rand() % 4;


    if(val_atk == 0){
        hp--;
        gotoxy(41,12);
        printf("O INIMIGO UTILIZOU UM ATAQUE SIMPLES");
    }else if(val_atk == 1){
        hp = hp-3;
        gotoxy(43,12);
        printf("O INIMIGO UTILIZOU UM ATAQUE FORTE");
    }else if(val_atk == 2){
            hp_inimigo++;
            gotoxy(56,12);
        printf("O INIMIGO SE DEFENDEU");
        }else if(val_atk == 3){
        gotoxy(56,12);
        printf("O INIMIGO N/ FEZ NADA");
    }


}
void personagem()
{



    int x,a,d=2,cx[300]={2,2},cy[300]={2,2},t=1;
    char tecla='a';
    char run;

    while(tecla != 's')
    {
        sprite_inimigo_circulo1();
        boss();
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






        //Ativador boss
            if(cy[0]==9){
                if(cx[0]>=60 && cx[0]<=70){batalha();boss_var = 1;  }
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
            if(cx[0]== 30 ){
                    if(cy[0] == 12){
                        hp = 20;
                    }
                }


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
void batalha()
{
    int a;
    int k;

    int opcao;



    system("cls");
    for(a = 1; a < 24; a++){
    printf("%c",219);
    gotoxy(0, a);
  }
//Parede horizontal superior
    for(a = 1; a < 80; a++){
    printf("%c",219);
    gotoxy(a, 0);
  }

//Parede horizontal inferior
    for(a = 1; a < 80; a++){
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
  //Ataque
    gotoxy(6,7);
    gotoxy(2,18);
    printf("Clique [1] | Ataque Basico: 1 ATK");
    gotoxy(2,20);
    printf ("Clique [2] | Ataque Especial: 3 ATK");
    if(countdown <= 0){
    gotoxy(2,22);
    printf ("Countdown do 'Ataque Especial' - [0]");
    }else{
    gotoxy(2,22);
    printf("Countdown do 'Ataque Especial' - [%d]", countdown);
    }



//loop batalha
if(boss == 1){



}else{
while(hp_inimigo > 0){
  gotoxy(64,14);
  printf ("HP INIMIGP: %d",hp_inimigo);
  gotoxy(3,3);
  atk_inimigo();
  gotoxy(3,14);
  printf("HP: %d/20",hp);
  gotoxy(3,12);
  printf ("Escolha um ataque: ");

  gotoxy(22,12);
  scanf("%d",&opcao);


  if(opcao == 1){
    countdown--;
    hp_inimigo--;
    gotoxy(64,14);
    printf ("HP INIMIGP: %d",hp_inimigo);
    gotoxy(19,25);

    system("pause");
    batalha();
    system("cls");

  }else if(opcao == 2){
    if(countdown <= 0){
    hp_inimigo = hp_inimigo-3;
    countdown = 3;
    gotoxy(64,14);
    printf ("HP INIMIGP: %d",hp_inimigo);
    gotoxy(19,25);
    }else{
    gotoxy(3,10);
    printf("A habilidade esta em countdown, espere mais %d rodadas",countdown);
    gotoxy(19,25);
    }

    system("pause");
    batalha();
    system("cls");
        }
    //ATK DEV -- APAGAR ANTES DE POSTAR
    else if(opcao == 3){

    hp_inimigo = 0;
    gotoxy(65,14);
    printf ("HP INIMIGP: %d/10",hp_inimigo);
    gotoxy(19,25);

    system("pause");
    batalha();
    system("cls");

    }else{
        gotoxy(3,12);
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

}
int main()
{
    do{
    menu();
    }while(h == 1);
    if(h == 2){
        gotoxy(10,25);
        exit(1);
        return 1;
    }if(h == 3){
        hist();
    }

    system("cls");
    circulo1();
    npc_velh_1();
    circulo1();
    personagem();
    getchar();

}
