#include <stdio.h>
#include "./menu.c"
#include "inc/globals.h"

int cmdColor()
{
  printf("I print colors\n");
  return 0;
}

int cmdNames()
{
  printf("I print names\n");
  return 0;
}

int cmdNumbers()
{
  printf("I print numbers\n");
  return 0;
}

int cmdSongs()
{
  printf("I print songs\n");
  return 0;
}

int cmdMovies()
{
  printf("I print movies\n");
  return 0;
}

int main()
{

  int x = displayMenu();

  return 0;
}
