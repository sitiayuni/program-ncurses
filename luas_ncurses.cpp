#include <ncurses/ncurses.h>


int main (){
	
// deklasi alas, , luas, 
	float p,l,L;
	
	initscr();
	
	clear();
	
	mvprintw(10,10, "Luas Persegi Panjang");
	
	mvprintw(13,10, "Masukkan Panjang Yang Ketahui :  ");
	scanw("%f",&p);
	
	mvprintw(15,10, "Masukkan Panjang Yang Ketahui :  ");
	scanw("%f",&l);
	
	L = (p*l);
	
	mvprintw(17,10, " luas yang diperoleh : %f",L);
	
	getch();
	endwin();
	
	
}
