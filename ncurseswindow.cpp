#include <ncurses.h>

int main() {
  /* NAMA : SITI AYUNI
     KELAS : B
     NPM : 2117051068
     */
  
  initscr();
  curs_set (0);

  WINDOW *win = newwin(20, 35, 4, 8); // panjang = 20, lebar = 35, dimulai pada baris 4 kolom 8
    refresh(); 
    
    box(win, 0, 0);
    wrefresh(win);
    
    getch(); //menahan layar
    endwin(); //mengakhiri program 
  
} 
