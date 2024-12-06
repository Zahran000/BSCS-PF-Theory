#include <stdio.h>

struct  Player
{
    int ballScores[12];
    char playerName[100];
    int totalScore;
};

void playGame(struct Player *player){
    player->totalScore = 0;
    for(int i=0; i<12; i++){
        int valid = -1;
        while(valid == -1){
            printf("Enter the score for ball %d: ", i+1);
            scanf("%d", &player->ballScores[i]);
            valid = validateScore(player->ballScores[i]);
        }
        player->totalScore += player->ballScores[i];
    }
}

int validateScore(int score){
    if(score >= 0 && score <= 6){
        return score;
    }
    else{
        printf("Invalid score. Please enter a score between 0 and 6\n");
        return -1;
    }
}

void findWinner(struct Player *player1, struct Player *player2){
    int total_score1 = 0;
    int total_score2 = 0;
    for(int i=0; i<12; i++){
        total_score1 += player1->ballScores[i];
        total_score2 += player2->ballScores[i];
    }
    if(total_score1 > total_score2){
        printf("Player 1 wins by %d runs\n", total_score1-total_score2);
    }
    else if(total_score2 > total_score1){
        printf("Player 2 wins by %d runs\n", total_score2-total_score1);
    }
    else{
        printf("The match is a draw\n");
    }
}

void displayMatchScoreboard(struct Player *player1, struct Player *player2){
    printf("Player 1 Summary\n");
    printf("Player Name: %s\n", player1->playerName);
    printf("Total Score: %d\n", player1->totalScore);
    printf("Average Score: %f\n", (float)player1->totalScore/12);

    printf("Player 2 Summary\n");
    printf("Player Name: %s\n", player2->playerName);
    printf("Total Score: %d\n", player2->totalScore);
    printf("Average Score: %f\n", (float)player2->totalScore/12);
}

int main(){
    struct Player player1;
    struct Player player2;
    printf("Enter the name of player 1: ");
    scanf("%s", player1.playerName);
    printf("Enter the name of player 2: ");
    scanf("%s", player2.playerName);
    printf("SCORES FOR Player 1\n");
    playGame(&player1);
    printf("SCORES FOR Player 2\n");
    playGame(&player2);
    findWinner(&player1, &player2);
    displayMatchScoreboard(&player1, &player2);
}