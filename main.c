/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** maths
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void firstpart(int p1, int p2)
{
    float *res = malloc(sizeof(float) * 6);
    float tab[6][6];
    int a = 1;
    int b = 1;

    printf("\tX=10\tX=20\tX=30\tX=40\tX=50\tY law\n");
    while (b <= 6) {
        res[5] = 0;
        if (b <= 5)
            printf("Y=%d", b * 10);
        else
            printf("X law");
        a = 1;
        while (a <= 5) {
            if (b == 6)
                tab[a - 1][b - 1] = res[a - 1];
            else
                tab[a - 1][b - 1] = (float)((p1 - a * 10) * (p2 - b * 10)) / (float)((5 * p1 - 150) * (5 * p2 - 150));
            res[a - 1] = res[a- 1] + tab[a - 1][b - 1];
            printf("\t%.3f", tab[a - 1][b - 1]);
            res[5] = res[5] + tab[a - 1][b - 1];
            a = a + 1;
        }
        if (b != 6)
            printf("\t%.3f\n", res[5]);
        else
            printf("\t1.000\n");
	tab[a - 1][b - 1] = res[5];
        b = b + 1;
    }
    free(res);
}

void secondpart(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    float tab[6][6];
    float *stab = malloc(sizeof(float) * 10);

    printf("--------------------------------------------------------------------------------\n");
    printf("z\t20\t30\t40\t50\t60\t70\t80\t90\t100\np(Z=z)");
    while(a < 5) {
        b = 0;
     	while(b < 5) {
            stab[a + b] += tab[a][b];
            stab[9] += tab[a][b];
            b = b + 1;
	}
        a = a + 1;
    }
    while(c < 9) {
	printf("\t%.3f", stab[c]);
        c = c + 1;
    }
    printf("\n");
}

int check(char **av)
{
    int a = 1;
    int b = 0;

    while(av[a]) {
        b = 0;
        while (av[a][b]) {
            if (av[a][b] < '0' || av[a][b] > '9')
                return (-1);
            b++;
        }
        a++;
    }
    return (0);
}

int main (int ac, char **av)
{
    int av1;
    int av2;

    if (ac != 3)
        exit(84);
    if (check(av) == -1)
        exit(84);
    else {
        av1 = atoi(av[1]);
        av2 = atoi(av[2]);
        printf("--------------------------------------------------------------------------------\n");
        firstpart(av1, av2);
        secondpart();
        printf("--------------------------------------------------------------------------------\n");
        // troisième partie ici
        // printf("--------------------------------------------------------------------------------\n");
        return (0);
    }
}
