#include "data.h"
struct zamglai player1;

/*static char *name[] = player1.name;*/

int main(void) {
  system("clear");
  printf("ТЕСТОВЫЙ ВХОД В ИГРУ!\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("Добро Пожаловать в RPG_NAME!");
  printf("\n\n\n\nВведите имя персонажа:");
  scanf("%s", player1.name);
  choice_class_player();
  printf("\n\nИмя:%s Твой класс:%s\n\n", player1.name,  player1.class[player1.choiced_class]);
  /*sleep(3);*/
  
  system("clear");
  printf("Привет, %s!\n\n\n", player1.name);
  /*glagne_menu();*/
  
}

  

