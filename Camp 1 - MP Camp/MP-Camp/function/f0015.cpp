#include <stdio.h>

float grade(int n, int k[], int g[]){
	float kg = 0;
	int i;
	for(i = 0; i < n; i++){
		kg += (k[i]*g[i]);
	}
	
	float sk = 0;
	for(i = 0; i < n; i++){
		sk += k[i];
	}
	
	return kg/sk;
	
}

int main(){
	int n;
	scanf("%d", &n);
	
	int k[n] = {};
	int g[n] = {};
	
	int i;
	for(i = 0; i < n; i++){
		scanf("%d %d", &k[i], &g[i]);
	}
	
	printf("%.2f", grade(n, k, g));
	
	return 0;
}
