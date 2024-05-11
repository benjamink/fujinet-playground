#ifndef MENU_H
#define MENU_H

typedef enum
{
  SHOW_NAME,
  SHOW_COLOR,
  QUIT,
  INVALID_CHOICE
} MenuOption;

MenuOption getUserChoice(void);
int displayMenu();

#endif // MENU_H
