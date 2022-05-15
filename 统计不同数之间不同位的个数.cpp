#include<stdio.h>

int get_diff_bit(int m, int n){
	int tmp = m ^ n;
	int count = 0;
	while(tmp != 0){
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main(){
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d", count);
	return 0;
} 
