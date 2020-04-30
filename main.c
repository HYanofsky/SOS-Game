/*Hadassah Yanofsky
ECE 160 - intro to C and C++
Cooper Union
Spring 2019 */

# include <stdio.h>
# include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

int main ()
{
        while(1)
        {
                how_big();
                init_board();
                if(numb_players()==1)
                {
                        players=1;
                        comp_play();
                }
                else
                {
                        players=2;
                        two_player();
                }
                if(game_done())
                {
                        printf("Game done!\n");
                        winner();

                        if (!play_again())
                        {
                                break;
                        }

                }
        }
        return 0;
}

