#include <windows.h>

// hwnd = window handle of button provider. can be found at ButtonStatus.dll! 0x1070
// msg = 0x8004 is WM_REDBUTTON
// waram = 0 = OnRedButtonReleased, 1 = OnRedButtonPressed, 2 = Detected?, 3 =
Removed?
// Param = unused
SendMessage ( (HWND) 0x1000b02c8, 0x8004, 2, 0);
