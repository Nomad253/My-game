#include "data.h"

char player_name[MAXLONGNAME];
char* planets_name[5] = {"PLANET0", "PLANET1", "PLANET2", "PLANET3", "PLANET4"};
char* class_choiced[5] = {"TEST0", "TEST1", "TEST2", "TEST3", "TEST4"};
int player_cash = 0;
int player_hp = 0;
int player_class_hp = 0;
int player_exp = 0;
int player_atk = 0;

int main(void) {
  printf("name:");
  fgets(player_name,MAXLONGNAME,stdin);
  choice_class_player();
  glagne_menu();
}
