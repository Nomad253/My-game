#include "data.h"
extern struct zamglai player1;

extern char monster_name[];
extern int monster_hp;
extern int monster_atk;
extern int monster_def;
extern int monster_live;
extern int monster;

int loser;
int loot_cash;
int loot_exp;

int nabeg(){
  printf("ТЕБЯ НАШЕЛ МОНСТР!!!1!!1!");
  randommonst;
  printf("monster_name=%s monster_hp=%d monster_atk=%d monster_def=%d monster=%d ", monster_name[monster], monster_hp, monster_atk, monster_def, monster);
  for (int actions;  monster_live > 0 | player1.hp > 0; actions = 0) {
    printf("Действия   (1 - удар, 2 - бежать)   :");
    scanf("%d", actions);
    switch (actions) {
     case 1:
       monster_hp = monster_hp - 2;
       printf("Ты нанес монстру 2 урона, monster_hp = %d", monster_hp);
       break;
     case 2:
       loser = 1;
       goto loser_exit;
    }
  }
  if (monster = 0) {
    loot_cash = rand() % 20;
    loot_exp = rand() % 20;
    printf("ПЕРЕМОГА!. Ты получил %d опыта и %d денег. %s убит %s!", loot_exp, loot_cash,  monster_name, player1.name);
    player1.cash = player1.cash + loot_cash;
    player1.exp = player1.exp + loot_exp;
   }
  loser_exit: if (loser = 1 | player1.hp > 0) {
    loot_cash = rand() % 20;
    player1.cash = player1.cash - loot_cash;
    printf("Ты проиграл %d денег", loot_cash);
    player1.hp = 100;
   }
}
    
