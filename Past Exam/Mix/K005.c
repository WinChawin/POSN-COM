#include <stdio.h>

int main() {
    int ra, ca, rb, cb;
    scanf("%d %d %d %d", &ra, &ca, &rb, &cb);

    if (ca != rb) {
        printf("not multiply");
    }

    int ma[ra][ca], mb[rb][cb];

    for (int i = 0; i < ra; i++)
        for (int j = 0; j < ca; j++)
            scanf("%d", &ma[i][j]);

    for (int i = 0; i < rb; i++)
        for (int j = 0; j < cb; j++)
            scanf("%d", &mb[i][j]);

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            int sum = 0;
            for (int k = 0; k < ca; k++) {
                sum += ma[i][k] * mb[k][j];
            }
            if (j) printf(" ");
            printf("%d", sum);
        }
        if (i < ra - 1) printf("\n");
    }
    return 0;
}
