#include <ncurses.h>
#ifndef BOARD
#define BOARD
class BoardController{
    public:
        WINDOW *main_board, *score_board, *mission_board,*ending_board,*ending_board2;
        BoardController();

};
#endif
