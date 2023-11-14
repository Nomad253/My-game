#include "data.h"

extern struct zamglai player1;

static int cash_bug;

int glagne_menu(){
   for (int choice_in_menu; choice_in_menu < 5; choice_in_menu = 0) {
    system("clear");
    static int cash_bug;
    static int a;
    static int *b = &a;
    printf("ТЕСТ_МЕНЮ (1 - бой(В РАЗРАБОТКЕ!), 2 - характеристики, 3 - ограбить корован, 4 - выйти из игры) :");
    scanf("%d", b);

    if (a==1) {
      system("clear");
      nabeg;
    }
    else if (a==2) {
      if (cash_bug==2) {
	if(player1.cash>0) {
	  cash_bug = 1;
	  printf("ВЫХОД ИЗ ИГРЫ. ОШИБКА:228.%d", cash_bug);
	  return 0;
	}
	else {
	  cash_bug = 0;
	}
      }
      printf("\n\nИмя:%s\nКласс:%s\nОпыт:%d\nДеньги:%d\n", player1.name, player1.class[player1.choiced_class], player1.exp, player1.cash);
    }
    else if (a==3) {
      int korovan_cash;
      korovan_cash = rand()%1000;
      player1.cash = player1.cash + korovan_cash;
      printf("Ты ограбил корован на %d монет!\n", korovan_cash);
    }
    else if (a==4) {
      return 228;
    }
    
  
  }
}


int choice_class_player()
{
  for (int i, a; i < 3; i-- ) {
  static int player_class_choice;
  player_class_choice = 5;
  player1.hp = 100;
  printf("\nВЫБОР КЛАССА (1 - TEST1, 2 - TEST2, 3 - TEST3, 4 - TEST4)\n\n\n\n");
  printf("Выбери класс:");
  scanf("%d", &player_class_choice);
  if (player_class_choice==1) {
      player1.choiced_class = 0;
      player1.class[player1.choiced_class] = "TEST1";
      i = 3;
    }
    else if (player_class_choice==2) {
       player1.choiced_class = 1;
       player1.class[player1.choiced_class] = "TEST2";
      i = 3;
    }
     else if (player_class_choice==3) {
       player1.choiced_class = 3;
       player1.class[player1.choiced_class] = "TEST3";
      i = 3;
    }
     else if (player_class_choice==4) {
       player1.choiced_class = 4;
       player1.class[player1.choiced_class] = "TEST4";
      i = 3;
     }
      else {
	system("clear");
     }
     
  }
}
