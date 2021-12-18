#include<ncurses/ncurses.h>
using namespace std;

int main (){
	
	/*Nama = SITI AYUNI
	KELAS = B ILKOMP 21*/
	
	initscr();
	printw( "SITI AYUNI");
	
	printw( "Ilmu Komputer");
	

	refresh();
	getch();
	
	endwin();
}
