#define SDLK_A SDLK_a
#define SDLK_B SDLK_b
#define SDLK_C SDLK_c
#define SDLK_D SDLK_d
#define SDLK_E SDLK_e
#define SDLK_F SDLK_f
#define SDLK_G SDLK_g
#define SDLK_H SDLK_h
#define SDLK_I SDLK_i
#define SDLK_J SDLK_j
#define SDLK_K SDLK_k
#define SDLK_L SDLK_l
#define SDLK_M SDLK_m
#define SDLK_N SDLK_n
#define SDLK_O SDLK_o
#define SDLK_P SDLK_p
#define SDLK_Q SDLK_q
#define SDLK_R SDLK_r
#define SDLK_S SDLK_s
#define SDLK_T SDLK_t
#define SDLK_U SDLK_u
#define SDLK_V SDLK_v
#define SDLK_W SDLK_w
#define SDLK_X SDLK_x
#define SDLK_Y SDLK_y
#define SDLK_Z SDLK_z
#define SDLK_LEFTCONTROL SDLK_LCTRL
#define SDLK_RIGHTCONTROL SDLK_RCTRL
#define SDLK_LEFTALT SDLK_LALT
#define SDLK_RIGHTALT SDLK_RALT
#define SDLK_LEFTSHIFT SDLK_LSHIFT
#define SDLK_RIGHTSHIFT SDLK_RSHIFT
#define SDLK_CURSORDOWN SDLK_DOWN
#define SDLK_CURSORUP SDLK_UP
#define SDLK_CURSORLEFT SDLK_LEFT
#define SDLK_CURSORRIGHT SDLK_RIGHT
#define SDLK_ENTER SDLK_RETURN
#define SDLK_EQUAL SDLK_EQUALS
#define SDLK_APOSTROPHE SDLK_QUOTE
#define SDLK_BRACKET_LEFT SDLK_LEFTBRACKET
#define SDLK_BRACKET_RIGHT SDLK_RIGHTBRACKET
//#define SDLK_SCROLLLOCK SDLK_SCROLLOCK		/* I guess the SDL people don't like lots of Ls... */
#define SDLK_GRAVE	SDLK_BACKQUOTE
#define MKK(k) SDLK_##k

#include <QtCore>
#include <QKeyEvent>
#include <QKeySequence>
#include <SDL.h>

SDL_Keycode convQtKey2SDLKeyCode( Qt::Key q, uint32_t nativeVirtualKey = 0 );

SDL_Scancode convQtKey2SDLScanCode( Qt::Key q, uint32_t nativeVirtualKey = 0 );

SDL_Keymod convQtKey2SDLModifier( Qt::KeyboardModifiers m );

int  convKeyEvent2Sequence( QKeyEvent *event );

int  pushKeyEvent( QKeyEvent *event, int pressDown );

#ifdef WIN32
uint8_t win32GetKeyState( unsigned int vkey );
#endif
