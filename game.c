#include "data.h"
extern int choiced_class;

char player_name[30];
char player_class[MAXCLASSES];
int player_cash = 0;
int player_hp = 0;
int player_exp = 0;

int main(void) {
  system("clear");
  printf("Добро Пожаловать в RPG_NAME!");
  printf("\n\n\n\nВведите имя персонажа:");
  //scanf("%s", &player_name[]);
  player_name[30] = "name";
  choice_class_player();
  printf("\n\nИмя:%s Твой класс:%s", (char)player_name[30], (char)player_class[choiced_class]);
  /*sleep(3);*/

  system("clear");
  printf("Привет, %s!\n\n\n", player_name);
  glagne_menu();

  return 0;
}



