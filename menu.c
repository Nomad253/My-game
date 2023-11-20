#include "data.h"

enum planets {PLANETA0, PLANET1, PLANET2, PLANET3, PLANET4};
enum classes {TEST1 = 1, TEST2, TEST3, TEST4};
extern char* planets_name[4];
extern char player_name[25];
extern char* class_choiced[];
extern int player_cash;
extern int player_hp;
extern int player_exp;
extern player_class_hp;
enum planets player_planet;
enum classes player_class;

int glagne_menu(){
  for (int a, choice_in_menu; choice_in_menu < 5; choice_in_menu = 0) {
    printf("ТЕСТ_МЕНЮ (1 - бой, 2 - характеристики, 3 - ограбить корован, 4 - выйти из игры) :");
    scanf("%d", &a);
    system("clear");

    if (a == 1) {
      nabegat();
      player_hp = 0 + player_class_hp;
    }
    else if (a==2) {

      printf("Имя:%s\nКласс:%s\nОпыт:%d\nДеньги:%d\nПланета:%s\n", player_name[25], class_choiced[player_class], player_exp, player_cash, planets_name[player_planet]);
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
  srand(time(NULL));
  do {
    printf("\nВЫБОР КЛАССА (1 - TEST1, 2 - TEST2, 3 - TEST3, 4 - TEST4)\n\n\n\n");
    printf("Выбери класс:");
    scanf("%d", &player_class);
    switch(player_class) {
    case TEST1:
      player_planet = rand() % 5;
      player_class_hp = 50;
      player_cash = 10;
      t = true;
      break;
    case TEST2:
      player_planet = rand() % 5;
      player_class_hp = 123;
      player_cash = 231;
      t = true;
      break;
    case TEST3:
      player_planet = rand() % 5;
      player_class_hp = 1123;
      player_cash = 2222;
      t = true;
      break;
    case TEST4:
      player_planet = rand() % 5;
      player_class_hp = 122;
      player_cash = 1111;
      t = true;
      break;
  }
  player_hp = player_class_hp;
  } while (t == false);
  printf("\n\nИмя:%s Твой класс:%s", player_name[25], class_choiced[player_class]);
}
