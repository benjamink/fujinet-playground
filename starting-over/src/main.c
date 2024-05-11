#include <stdio.h>
#include "globals.h"

int cmdShowColor()
{
  printf("The color is orange\n");
  return 0;
}

int cmdShowName()
{
  printf("The name is John\n");
  return 0;
}

void handleSelection(MenuSelection selectedItem)
{
  switch (selectedItem)
  {
  case SHOW_COLOR:
    cmdShowColor();
    break;
  case SHOW_NAME:
    cmdShowName();
    break;
  default:
    printf("Invalid selection!\n");
    break;
  }
}

int main()
{
  menuSelection = SHOW_COLOR;

  handleSelection(SHOW_COLOR);
  handleSelection(SHOW_NAME);
}