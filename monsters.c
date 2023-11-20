#include "data.h"
enum monsterrand {TEST1, TEST2, TEST3};
enum monsterrand monster_rand;

char* monster_name[ALLMONSTERS] = {"TEST1", "TEST2", "TEST3"};
int monster_hp;
int monster_atk;
int monster_def;
int monster_live;
int monster;

int randommonst(){

  srand(time(NULL));


  monster = rand() % 3;
  
  switch(monster) {
   case 0:
     monster_rand = 0;
     monster_hp = 5;
     monster_atk = 5;
     monster_def = 5;
     monster_live = 1;
     break;
  case 1:
    monster_rand = 1;
    monster_hp = 4;
    monster_atk = 4;
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




