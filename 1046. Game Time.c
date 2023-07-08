#include <stdio.h>

int main()

{

    int A, B, durationTm;

    scanf("%d %d", &A, &B);

    durationTm = B - A;

    if (durationTm < 0)

    {

        durationTm = 24 + (B - A);

    }

    if (A == B)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", durationTm);



    return 0;

}
