#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;
    int user_number;
    int wins = 0;
    int losses = 0;
    int draws = 0;
    int random_number;
    int round;


for (round = 0; round < 3; round++) {

    printf("Vvedite chislo ot 1 do 3: ");
    scanf("%d", &user_number);


if (user_number == 1) {
        printf("Kamen\nvs\n");
    } else if (user_number == 2) {
        printf("Nozhnitsy\nvs\n");
    } else if (user_number == 3) {
        printf("Bumaga\nvs\n");
    } else {
        printf("\nNepravilnyy vybor. Vvedite chislo ot 1 do 3.\n");
    }


    srand(time(NULL));
    for (i = 1; i <= 1; i++) {
        random_number = rand() % 3 + 1;
    }
if (random_number == 1) {
        printf("Kamen\n");
    } else if (random_number == 2) {
        printf("Nozhnitsy\n");
    } else if (random_number == 3) {
        printf("Bumaga\n");
    }


if (user_number == random_number) {
        printf("Nicheya :O\n");
        draws++;
    } else if ((user_number == 1 && random_number == 2) || (user_number == 2 && random_number == 3) || (user_number == 3 && random_number == 1)) {
        printf("Vy vyigrali :D\n");
        wins++;
    } else if ((user_number == 1 && random_number == 3) || (user_number == 2 && random_number == 1) || (user_number == 3 && random_number == 2)) {
        printf("Vy proigrali :(\n");
        losses++;
    }


    printf("Vy vyigrali %d raz and proigrali %d raz.\n\n", wins, losses);

}


    printf("Igra zavershena.");
    return 0;
}