#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main (){
	
	initscr();
	
	mvprintw(5,7," Loading");

	
	mvprintw(5,15, " .... ");
	refresh();
        Sleep (1000);
	
	mvprintw(5,20, " .... ");
	refresh();
	Sleep (1000);
	
	mvprintw(5,25, " ....");
	refresh();
	Sleep(1000);
	
	mvprintw(5,30," ....");
	refresh();
	Sleep(1000);
	
	getch();
	
endwin();
	
}
