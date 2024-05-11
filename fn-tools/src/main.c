#include <stdio.h>
#include "menu.h"
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
  menuSelection = displayMenu();

  while (1)
  {
    switch (menuSelection)
    {
    case COLORS:
      cmdColor();
      break;
    case NAMES:
      cmdNames();
      break;
    case NUMBERS:
      cmdNumbers();
      break;
    case SONGS:
      cmdSongs();
      break;
    case MOVIES:
      cmdMovies();
      break;
    case MENU_ITEMS:
      break;
    }
  }

  return 0;
}
