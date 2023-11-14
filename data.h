#ifndef ALL_H
#define ALL_H




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXCLASSES 3
#define ALLMONSTERS 3
#define MAXLONGNAME 25

  struct zamglai {
  char name[40];
  int choiced_class;
  char class[MAXCLASSES];
  unsigned int cash;
  unsigned int exp;
  int hp;
}  ;

int nabeg();
int randommonst();
int choice_class_player();
int glagne_menu();

#endif
