#include <tgi.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#ifdef __APPLE2ENH__
#include <inc/apple2enh.h>
#elif defined(__APPLE2__)
#include <inc/apple2.h>
#elif defined(__ATARI__)
#include <inc/atari.h>
#elif defined(__C64__)
#include <inc/c64.h>
#endif

#define MENU_ITEMS 5

const char *menuline[20];

const char *menu[MENU_ITEMS] = {
    "Item 1",
    "Item 2",
    "Item 3",
    "Item 4",
    "Item 5"};

void draw_menu(int x, int y, int current_item)
{
  int i;

  for (i = 0; i < MENU_ITEMS; ++i)
  {
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
    cputsxy(x, y + i, memcpy(menuline, menu[i], strlen(menu[i])));
  }
}

void delay(int delay)
{
  int i;
  // Simple delay
  for (i = 0; i < delay; ++i)
  {
    ;
  }
}

int main()
{
  int current_item = 0;
  int startpad = 0;
  int selection_made = 0;
  char key;
  memset(menuline, ' ', 20);

  clrscr();

  // Draw the menu
  draw_menu(10, 10, current_item);

  // Main loop
  while(!selection_made)
  {
    if (kbhit()) {
      key = cgetc();

      if (key == NAV_UP) {
        if (current_item > 0) {
          current_item--;
        }
      }
      else if (key == NAV_DOWN) {
        if (current_item < MENU_ITEMS - 1) {
          current_item++;
        }
      }
      else if (key == NAV_SELECT) {
        clrscr();
        revers(0);
        textcolor(1);
        cputsxy(15, 8, "YOU PICKED:");
        revers(1);
        cputsxy((20 - (strlen(menu[current_item]) / 2)), 10, menu[current_item]);
        break;
      }
    }
    
    draw_menu(10, 10, current_item);
  }

  delay(10000);
  return 0;
}
