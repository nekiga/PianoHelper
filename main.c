#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int quick_notes(void);

int menu(void)
{
    int op;
    system("clear");
    printf("Welcome to PianoHelper! select one of the options: \n");
    printf("1: Quick notes!\n");
    printf("2: To be added\n");
    printf("X: Quit the program\n");
    scanf("%d", &op);
    if (op == 1)
        return (quick_notes());
    if (op == 'x')
        return (0);
}
int quick_notes(void)
{
    char letter;
    int i;
    char notes[] = {'1','A','B','C','D','E','F','G'};
    int round;
    int old_i;

    i = 0;
    round = 20;
    srand(time(NULL));
    while (round)
    {
        old_i = i;
        system("clear");
        system("setterm -bold on");
        i = rand() % (7 + 1 - 1) + 1;
        if (old_i == i)
        {
            if (i < 5)
                i =+ 2;
            else
                i =- 2;
        }
        printf("                                                                     %c\n", notes[i]);
        round--;
        sleep(2);
        system("clear");
    }
     while (1)
    {
        printf("Game ended, if you  want to go again, press G\n");
        scanf("%c", &letter);
        if (letter == 'g')
             quick_notes();
        else
            return (printf("Thanks for playing!"));
    }
    return 0;
}

int main(void)
{
    menu();
    return 0;
}