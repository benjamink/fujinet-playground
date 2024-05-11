#ifndef GLOBALS_H
#define GLOBALS_H

#ifdef __APPLE2ENH__
#include "apple2enh.h"
#elif defined(__APPLE2__)
#include "apple2.h"
#elif defined(__ATARI__)
#include "atari.h"
#elif defined(__C64__)
#include "c64.h"
#else
#define NAV_UP 0x00
#define NAV_DOWN 0x00
#define NAV_SELECT 0x00
#endif

#endif // GLOBALS_H