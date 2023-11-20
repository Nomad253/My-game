#include "data.h"
enum monsterrand {TEST1, TEST2, TEST3};
enum monsterrand monster_rand;
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
  system("clear");
  printf("ТЕБЯ НАШЕЛ МОНСТР!!!1!!1!");
  printf("monster_hp = %d, monster_atk = %d", monster_hp, monster_atk);
  randommonst();
  for (int actions;  monster_live > 0 || player_hp > 0; actions = 0) {
    if((monster_hp <= 0)) {
    goto win2;
    }
    printf("\n\nДействия   (1 - удар, 2 - бежать)   :");
    scanf("%d", &actions);
    switch (actions) {
     case 1:
       player_atk = rand() % 5;
       monster_hp = monster_hp - player_atk;
       player_hp = player_hp - monster_atk;
       printf("\n player_atk=%d monster_hp = %d \n monster_atk = %d player_hp = %d \n", player_atk, monster_hp, monster_atk, player_hp);
       break;
     case 2:
       loser = 1;
       goto loser_exit;
    }
  }
  loser_exit: if (loser = 1 || player_hp <= 0) {
    loot_cash = rand() % 20;
    player_cash = player_cash - loot_cash;
    printf("Ты проиграл %d денег \n\n\n", loot_cash);
    player_hp = 100;
   }
   win2: if (monster_hp <= 0 || monster_live == 0) {
    system("clear");
    loot_cash = rand() % 20;
    loot_exp = rand() % 20;
    printf("ПЕРЕМОГА!. Ты получил %d опыта и %d денег. MONSTER убит %s! \n\n\n\n\n", loot_exp, loot_cash, player_name[MAXLONGNAME]);
    player_cash = player_cash + loot_cash;
    player_exp = player_exp + loot_exp;
   }
  return 0;
}

int randommonst(){

  srand(time(NULL));


  monster = rand() % 3;
  
  switch(monster) {
   case 0:
     monster_rand = 0;
     monster_hp = 5;
     monster_atk = 2;
     monster_def = 5;
     monster_live = 1;
     break;
  case 1:
    monster_rand = 1;
    monster_hp = 4;
    monster_atk = 1;
    monster_def = 4;
    monster_live = 1;
    break;
  case 2:
    monster_rand = 2;
    monster_hp = 3;
    monster_atk = 3;
    monster_def = 3;
    monster_live = 1;
    break;
  }
}

