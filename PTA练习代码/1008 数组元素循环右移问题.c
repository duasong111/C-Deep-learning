//这个是我最开始想的
#include <stdio.h>
#define N 10
int main(void) {
    int limit, tranfer, arr[N];
    int i;
    scanf("%d %d", &limit, &tranfer);
    for (i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }
    int j, t;
    for (j = 0; j < (limit - tranfer); j++) {
        for (i = 0; i < limit - 1; i++) {
            t = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = t;
        }
    }
    for (i = 0; i < limit; i++) {
        if (i == 0) printf("%d", arr[i]);
        else printf(" %d", arr[i]);
    }

    return 0;
}
