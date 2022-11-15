#include <ncurses.h>
#include "compute.c"
int main() {
	initscr();
	start_color();
	curs_set(FALSE);
	startMenu();
	endwin();
}
