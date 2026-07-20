// Stone, Paper and Scissor Game.
/* 
Stone = 0
Paper = 1
Scissor = 2
 */

#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h> 

int main(){
    srand(time(0));
    int player;
    int computer = rand() % 3; // Generate Random Number

// INTRO
    printf("        --Welcome to-- \n");
    printf("==================================\n");
    printf(" -Stone, Paper and Scissor Game-\n");
    printf("\n");
    printf("   ---RULES--- \n-> Press 0 For Stone\n-> Press 1 For Paper\n-> Press 2 For Scissor\n");
    
// INPUT
    printf("Enter Your Choice: ");
    scanf("%d", &player);

// Computer Choice
    if(computer == 0){
        printf("Computer Choose: %d (Stone)\n", computer);

    }
    else if(computer == 1){
        printf("Computer Choose: %d (Paper)\n", computer);
    }
    else if(computer == 2){
        printf("Computer Choose: %d (Scissor)\n", computer);
    }

// Main If Else Ladder
    if(player == 0 && computer == 0){
        printf(" --Its a Draw!-- \n");
    }
    else if(player == 0 && computer == 1){
        printf(" --You Lose!-- \n");
    }
    else if(player == 0 && computer == 2){
        printf(" --You WIN!-- \n");
    }
    else if(player == 1 && computer == 0){
        printf(" --You WIN!-- \n");
    }
    else if(player == 1 && computer == 1){
        printf(" --Its a Draw!-- \n");
    }
    else if(player == 1 && computer == 2){
        printf(" --You Lose!-- \n");
    }
    else if(player == 2 && computer == 0){
        printf(" --You Lose!-- \n");
    }
    else if(player == 2 && computer == 1){
        printf(" --You WIN!-- \n");
    }
    else if(player == 2 && computer == 2){
        printf(" --Its a Draw!-- \n");
    }
    else{
        printf(" --Invalid Choice!-- \n");
        printf("Please Enter 0,1 or 2\n");
    }

// END
    printf("\n");
    printf("Press (Upward Key + Enter) to Play Again\n");
    return 0;
} 