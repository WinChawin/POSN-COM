#include <stdio.h>
#include <string.h>

int main(){
	char s[100], b;
	int h, w, n;
	
	gets(s);
	scanf("%c %d %d %d", &b, &h, &w, &n);
	
	int i, j;
	int totalWidth = (n*2) + (int)strlen(s) * w;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < totalWidth; j++){
        	printf("%c", b);
		}
        printf("\n");
    }

    for (int i = 0; i < h; i++){
        for (int j = 0; j < n; j++){
        	printf("%c", b);
		}
        for (int j = 0; j < w; j++){
        	printf("%s", s);
		}
        for (int j = 0; j < n; j++){
        	printf("%c", b);
		}
        printf("\n");
    }

   for (int i = 0; i < n; i++){
        for (int j = 0; j < totalWidth; j++){
        	printf("%c", b);
		}
        printf("\n");
    }
	
	return 0;
}
