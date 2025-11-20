#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int h[n];
    for(int i = 0; i < n; i++) scanf("%d", &h[i]);

    int left[n], right[n];

    left[0] = h[0];
    for(int i = 1; i < n; i++) {
        left[i] = (h[i] > left[i-1]) ? h[i] : left[i-1];
    }

    right[n-1] = h[n-1];
    for(int i = n-2; i >= 0; i--) {
        right[i] = (h[i] > right[i+1]) ? h[i] : right[i+1];
    }

    int water = 0;
    for(int i = 0; i < n; i++) {
        int minHeight = (left[i] < right[i]) ? left[i] : right[i];
        if(minHeight > h[i]) {
            water += (minHeight - h[i]);
        }
    }

    printf("%d", water);
    return 0;
}
