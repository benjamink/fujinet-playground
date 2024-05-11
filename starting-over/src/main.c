#include <stdio.h>
#include <stdlib.h>
#include "inc/globals.h"
#include "menu.h"
#include "commands.h"

int main()
{
  MenuOption choice;

  do
  {
    choice = displayMenu();

    switch (choice)
    {
    case 0:
      choice = SHOW_NAME;
      cmdShowNames();
      break;
    case 1:
      choice = SHOW_COLOR;
      cmdShowColors();
      break;
    case 2:
      choice = QUIT;
      cmdQuit();
    default:
      choice = INVALID_CHOICE;
      printf("Invalid choice. Please try again.\n");
      delay(1000);
      break;
    }
  } while (choice != QUIT);

  return 0;
}
