#define NAV_UP CH_CURS_LEFT
#define NAV_DOWN CH_CURS_RIGHT
#define NAV_SELECT CH_ENTER

/**
 * @brief menu command states
 * @enum ITEM1 item 1
 * @enum ITEM2 item 2
 * @enum ITEM3 item 3
 * @enum ITEM4 item 4
 * @enum ITEM5 item 5
 */
typedef enum _menuItems
{
  COLORS,
  NAMES,
  NUMBERS,
  SONGS,
  MOVIES,
  MENU_ITEMS
} MenuItems;

extern MenuItems menuSelection;