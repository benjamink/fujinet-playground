#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "inc/globals.h"
#include "commands.h"

const char *menuline[20];

const char *menuItems[3] = {
    "Names",
    "Colors",
    "Quit"};

void draw_menu(int x, int y, int current_item)
{
  int i;

  for (i = 0; i < sizeof(menuItems); ++i)
  {
    memset(menuline, ' ', 20);
    if (i == current_item)
    {
      revers(1);
      textcolor(1);
    }
    else
    {
      revers(0);
      textcolor(0);
    }
    cputsxy(x, y + i, memcpy(menuline, menuItems[i], strlen(menuItems[i])));
  }
}

int displayMenu()
{
  int current_item = 0;
  int selection_made = 0;
  // memset(menuline, ' ', 20);

  clrscr();

  // Draw the menu
  draw_menu(10, 10, current_item);

  // Main loop
  while (!selection_made)
  {
    if (kbhit())
    {
      char key;
      key = cgetc();

      if (key == NAV_UP)
      {
        if (current_item > 0)
        {
          current_item--;
        }
      }
      else if (key == NAV_DOWN)
      {
        if (current_item < sizeof(menuItems) - 1)
        {
          current_item++;
        }
      }
      else if (key == NAV_SELECT)
      {
        clrscr();
        /*
        revers(0);
        textcolor(1);
        cputsxy(15, 8, "YOU PICKED:");
        revers(1);
        cputsxy((20 - (strlen(menuItems[current_item]) / 2)), 10, menuItems[current_item]);
        */
        break;
      }
    }

    draw_menu(10, 10, current_item);
  }

  delay(1000);
  return current_item;
}