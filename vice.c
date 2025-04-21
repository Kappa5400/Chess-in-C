#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

#define FEN "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"

int main()  {
    
    AllInit();

    S_BOARD board[1];

    ParseFen(START_FEN, board);
    PrintBoard(board);
    ParseFen(FEN, board);
    
    return 0;
}

