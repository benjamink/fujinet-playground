#ifndef GLOBALS_H
#define GLOBALS_H

typedef enum _menuSelection
{
  SHOW_COLOR,
  SHOW_NAME,
  MENU_ITEM_COUNT
} MenuSelection;

extern MenuSelection menuSelection;

#endif // GLOBALS_H