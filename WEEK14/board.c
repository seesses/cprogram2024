//
//  board.c
//  sharkGame
//

#include "board.h"
#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
   for(i=0;i<N_COINPOS;i++)
    {    	
    	int randomcoinpos;
    	int coinpos;
    	while(1)
    	{
    		randomcoinpos = rand()%N_BOARD;
    		
    		if(board_coin[randomcoinpos] == 0){
    			coinpos=(rand()%MAX_COIN)+1;
    			
    			board_coin[randomcoinpos]=coinpos;
    			break;
			}
		}
	}
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int i;
	
	int aftershark; //상어가 이동할 칸의 변수 
	aftershark=rand()%MAX_SHARKSTEP+1; // move to  1 ~ MAX_SHARKSTEP 
	
	for (i=0; i<aftershark; i++) {
        int current_position;
		current_position=shark_position+i; 
        board_status[current_position] = BOARDSTATUS_NOK; 
    }
	
	shark_position+=aftershark;
	
	return shark_position; 
}


// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
