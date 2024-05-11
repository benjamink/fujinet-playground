#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "inc/globals.h"

void delay(int delay)
{
  int i;
  for (i = 0; i < delay; ++i)
  {
    ;
  }
}

void displayOutput(const char msg[])
{
  cputsxy((20 - (strlen(msg)) / 2), 10, msg);
  delay(10000);
}

void cmdShowNames()
{
  displayOutput("Your name is Bob");
}

void cmdShowColors()
{
  displayOutput("Your color is orange");
}

void cmdQuit()
{
  char msg[] = "Quitting...";
  cputsxy((20 - (strlen(msg)) / 2), 10, msg);
  delay(10000);
  exit(0);
}