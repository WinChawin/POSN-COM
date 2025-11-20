#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	char key[n];
	scanf("%s", &key);
	
	int ma = 0, mb = 0, mc = 0;
	char pa[3] = {'A', 'B', 'C'};
	char pb[4] = {'B', 'A', 'B', 'C'};
	char pc[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
	
	for(i = 0; i < n; i++){
		char ans = key[i];
		char pan = pa[i%3];
		char pbn = pb[i%4];
		char pcn = pc[i%6];
		ma += pan == ans;
		mb += pbn == ans;
		mc += pcn == ans;
	}
	
	int max = 0;
	char name[6];
	if(ma > mb){
		max = ma;
	}
	else{
		max = mb;
	}
	if (max < mc){
		max = mc;
	}
	
	printf("%d\n",max);
	
	if (ma == max){
		printf("Adrian\n");
	}
	if (mb == max){
		printf("Bruno\n");
	}
	if (mc == max){
		printf("Goran\n");
	}
	
	
	return 0;
}