#include "data.h"

enum planets {PLANETA0, PLANET1, PLANET2, PLANET3, PLANET4};
enum classes {TEST1 = 1, TEST2, TEST3, TEST4};
extern char* planets_name[4];
extern char player_name[25];
extern char* class_choiced[];
extern int player_cash;
extern int player_hp;
extern int player_exp;
extern int player_class_hp;
extern int player_atk;
enum planets player_planet;
enum classes player_class;

int glagne_menu(){
  for (int a, choice_in_menu; choice_in_menu != 5; a = 0) {
    printf("ТЕСТ_МЕНЮ (1 - бой, 2 - характеристики, 3 - ограбить корован, 4 - торговец, 5 - выйти из игры) :");
    scanf("%d", &a);
    system("clear");

    if (a == 1) {
      system("clear");
      nabegat();
    }
    else if (a==2) {

      printf("Имя:%s\nКласс:%s\nОпыт:%d\nЗдоровье:%d\n%d\nАтака:%d\nДеньги:%d\nПланета:%s\n", player_name, class_choiced[player_class], player_exp, player_hp, player_class_hp, player_atk, player_cash, planets_name[player_planet]);
    }
    else if (a==3) {
      system("clear");
      int korovan_cash;
      korovan_cash = rand()%1000;
      player_cash = player_cash + korovan_cash;
      printf("Ты ограбил корован на %d монет!\n", korovan_cash);
    }
    else if (a==4) {
      system("clear");
      int trade;
      printf("Торговец имеет у себя в наличии (1)Увеличение атака(+2 ATK, 500$) , (2)Увеличение здоровья(+20 HP, 600$), (3)Вылечить персонажа, (0)НИЧЕГО НЕ ПОКУПАТЬ\nПокупать?:");
      scanf("%d", &trade);
      switch(trade) {
      case 0:
	system("clear");
	break;
      case 1:
	system("clear");
	if(player_cash >= 500) {
	player_cash = player_cash - 500;
	player_atk = player_atk + 2;
	printf("player_atk=%d\n", player_atk);
	}
	else if(player_cash < 500) {
	  printf("Тебе не хватает денег на покупку!\n");
	}
	break;
      case 2:
	system("clear");
	if(player_cash >= 600) {
	player_cash = player_cash - 600;
	player_class_hp = player_class_hp + 20;
	printf("player_class_hp=%d\n", player_class_hp);
	}
	else if(player_cash < 600) {
	  printf("Тебе не хватает денег на покупку!\n");
	}
	break;
      case 3:
	if(player_cash >= 700 && player_hp < player_class_hp){
	  player_hp = 0 + player_class_hp;
	  printf("player_hp=%d\n", player_hp);
	}
	else if(player_cash <= 700 || player_hp == player_class_hp){
	    printf("Тебе не хватает денег на покупку или ты здоров!\n");
      }
	break;
    }
    }
    else if (a==5) {
      choice_in_menu = 5;
    }
  }
}


bool t = false;

int choice_class_player()
{
  srand(time(NULL));
  do {
    printf("\nВЫБОР КЛАССА (1 - TEST1, 2 - TEST2, 3 - TEST3, 4 - TEST4)\n\n\n\n");
    printf("Выбери класс:");
    scanf("%d", &player_class);
    switch(player_class) {
    case TEST1:
      player_planet = rand() % 5;
      player_atk = 10;
      player_class_hp = 50;
      player_cash = 10;
      t = true;
      break;
    case TEST2:
      player_planet = rand() % 5;
      player_atk = 5;
      player_class_hp = 123;
      player_cash = 231;
      t = true;
      break;
    case TEST3:
      player_planet = rand() % 5;
      player_atk = 3;
      player_class_hp = 1123;
      player_cash = 2222;
      t = true;
      break;
    case TEST4:
      player_planet = rand() % 5;
      player_atk = 2;
      player_class_hp = 122;
      player_cash = 1111;
      t = true;
      break;
  }
  player_hp = player_class_hp;
  } while (t == false);
  printf("\n\nИмя:%s Твой класс:%s", player_name[MAXLONGNAME], class_choiced[player_class]);
}
