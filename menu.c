#include "data.h"
int choiced_class = 0;

extern char player_name[];
extern char player_class[];
extern int player_cash;
extern int player_hp;
extern int player_exp;


int glagne_menu(){
  for (int a, choice_in_menu; choice_in_menu < 5; choice_in_menu = 0) {
    system("clear");
    static int cash_bug;
    printf("ТЕСТ_МЕНЮ (1 - бой, 2 - характеристики, 3 - ограбить корован, 4 - выйти из игры) :");
    scanf("%d", &a);

    if (a == 1) {
      system("clear");
      //nabeg();
    }
    else if (a==2) {
      if (cash_bug==2) {
	if(player_cash>0) {
	  cash_bug = 1;
	  printf("ВЫХОД ИЗ ИГРЫ. ОШИБКА:228.%d", cash_bug);
	  return 0;
	}
	else {
	  cash_bug = 0;
	}
      }
      printf("\n\nИмя:%s\nКласс:%s\nОпыт:%d\nДеньги:%d\n", player_name[30], player_class[choiced_class], player_exp, player_cash);
    }
    else if (a==3) {
      int korovan_cash;
      korovan_cash = rand()%1000;
      player_cash = player_cash + korovan_cash;
      printf("Ты ограбил корован на %d монет!\n", korovan_cash);
    }
    else if (a==4) {
      return 228;
    }


  }
   return 0;
}


int choice_class_player()
{
  for (int i, player_class_choice; i != 2 ; i = 1) {
  player_hp = 100;
  printf("\nВЫБОР КЛАССА (1 - TEST1, 2 - TEST2, 3 - TEST3, 4 - TEST4)\n\n\n\n");
  printf("Выбери класс:");
  scanf("%d", (int *)player_class_choice);
  switch(player_class_choice) {
  case 1:
     choiced_class = 0;
     player_class[0] = "TEST1";
     i = 2;
     break;
  case 2:
    choiced_class = 1;
    player_class[1] = "TEST2";
    i = 2;
    break;
  case 3:
    choiced_class = 2;
    player_class[2] = "TEST3";
    i = 2;
    break;
  case 4:
    choiced_class = 3;
    player_class[3] = "TEST4";
    i = 2;
    break;
  }

  }
  return 0;
}
