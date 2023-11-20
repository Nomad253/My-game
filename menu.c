#include "data.h"

enum classes {TEST1 = 1, TEST2, TEST3, TEST4};

extern char player_name[];
extern char* class_choiced[];
extern int player_cash;
extern int player_hp;
extern int player_exp;
enum classes player_class;


int glagne_menu(){
  for (int a, choice_in_menu; choice_in_menu < 5; choice_in_menu = 0) {
    static int cash_bug;
    printf("ТЕСТ_МЕНЮ (1 - бой, 2 - характеристики, 3 - ограбить корован, 4 - выйти из игры) :");
    scanf("%d", &a);

    if (a == 1) {
      system("clear");
      nabegat();
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
      printf("\n\nИмя:%s\nКласс:%s\nОпыт:%d\nДеньги:%d\n", player_name[25], class_choiced[player_class], player_exp, player_cash);
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
}

bool t = false;

int choice_class_player()
{
  do {
    printf("\nВЫБОР КЛАССА (1 - TEST1, 2 - TEST2, 3 - TEST3, 4 - TEST4)\n\n\n\n");
    printf("Выбери класс:");
    scanf("%d", &player_class);
    switch(player_class) {
    case TEST1:
      player_hp = 50;
      player_cash = 10;
      t = true;
      break;
    case TEST2:
      player_hp = 123;
      player_cash = 231;
      t = true;
      break;
    case TEST3:
      player_hp = 1123;
      player_cash = 2222;
      t = true;
      break;
    case TEST4:
      player_hp = 122;
      player_cash = 1111;
      t = true;
      break;
  }
  } while (t == false);
  printf("\n\nИмя:%s Твой класс:%s", player_name[MAXLONGNAME], class_choiced[player_class]);
  return 0;
}
