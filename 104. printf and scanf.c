#include <stdio.h>

int main()
{
    printf("RA2211042010035\n");
    int N, M;
    printf("Number of friends: ");
    scanf("%d", &N);
    printf("Number of left shoes: ");
    scanf("%d", &M);
    printf("Number of extra pairs of shoes to be bought: %d\n", N-M);
    printf("Number of right shoes to be bought: %d\n", M);
}
