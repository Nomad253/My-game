#include "data.h"

char player_name[25] = {"PLAYER_NAME"};
char* planets_name[5] = {"PLANET0", "PLANET1", "PLANET2", "PLANET3", "PLANET4"};
char* class_choiced[5] = {"TEST0", "TEST1", "TEST2", "TEST3", "TEST4"};
int player_cash = 0;
int player_hp = 0;
int player_class_hp = 0;
int player_exp = 0;
int player_atk;

int main(void) {
  srand(time(NULL));
  choice_class_player();
  system("clear");
  glagne_menu();

  /* system("clear");
  printf("Добро Пожаловать в RPG_NAME!");
  printf("\n\n\n\nВведите имя персонажа:");
  scanf("%s", &player_name[]);
  player_name[MAXLONGNAME] = "name";
  choice_class_player();
  printf("\n\nИмя:%s Твой класс:%s", player_name[MAXLONGNAME], player_class[MAXLONGNAME]);
  sleep(3);

  system("clear");
  printf("Привет, %s!\n\n\n", player_name);


  return 0;

  */
}
