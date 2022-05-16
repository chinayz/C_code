#include<stdio.h>
#include<string.h>


void reverse(char arr[]){
	int left = 0;
	int right = strlen(arr) - 1;
	while(left < right){
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main(){
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s", arr);
	return 0;
} 
