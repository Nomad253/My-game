#include "data.h"
extern enum monsterrand {TEST1, TEST2, TEST3} monster_rand;
extern char monster_name[];
extern int monster_hp;
extern int monster_atk;
extern int monster_def;
extern int monster_live;
extern int monster;

extern char *player_name[];
extern char *player_class[];
extern int player_cash;
extern int player_hp;
extern int player_exp;
extern player_atk;

int loser;
int loot_cash;
int loot_exp;

int nabegat() {
  printf("ТЕБЯ НАШЕЛ МОНСТР!!!1!!1!");
  randommonst();
  for (int actions;  monster_live > 0 || player_hp > 0; actions = 0) {
    if((monster_hp <= 0))
    goto win2;
    system("clear");
    printf("\n\nДействия   (1 - удар, 2 - бежать)   :");
    scanf("%d", &actions);
    switch (actions) {
     case 1:
       system("clear");
       player_atk = rand() % 5;
       monster_hp = monster_hp - player_atk;
       printf("Ты нанес монстру %d урона, monster_hp = %d \n", player_atk, monster_hp);
       break;
     case 2:
       loser = 1;
       goto loser_exit;
    }
  }
  loser_exit: if ((loser = 1) | (player_hp > 0)) {
    loot_cash = rand() % 20;
    player_cash = player_cash - loot_cash;
    printf("Ты проиграл %d денег", loot_cash);
    player_hp = 100;
   }
   win2: if ((monster_hp <= 0)) {
    system("clear");
    loot_cash = rand() % 20;
    loot_exp = rand() % 20;
    printf("ПЕРЕМОГА!. Ты получил %d опыта и %d денег. MONSTER убит %s! \n\n\n\n\n", loot_exp, loot_cash, player_name[MAXLONGNAME]);
    player_cash = player_cash + loot_cash;
    player_exp = player_exp + loot_exp;
   }
  return 0;
}

