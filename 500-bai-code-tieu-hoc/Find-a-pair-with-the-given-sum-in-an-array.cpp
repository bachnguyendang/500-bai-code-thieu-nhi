//Version 1: Brute force, unrefined
#include<stdio.h>
int main(){
	int size, sum; scanf("%d %d", &size,&sum);
	int ar[size];
	for(int i = 0; i < size; i++){
		scanf("%d", &ar[i]);
	} 
	int found = 0;
	for(int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(ar[i] + ar[j] == sum){
				if(found) printf("or\n");
				found++;
				printf("Pair found (%d,	 %d)\n", ar[i], ar[j]);
				break;
			}
		}
	}
	if(!found) printf("Pair not found"); 
	return 0;
} 
