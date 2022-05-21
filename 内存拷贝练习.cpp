#include<stdio.h>
#include<assert.h>

void *my_memmove(void *dest, void *src, size_t count){
	assert(dest != NULL);
	assert(src != NULL);
	void *ret = dest;
	if(dest < src){
		//从前向后拷贝 
		while(count--){
			*((char *)dest) = *(char *)src;
			dest = (char *)(dest + 1);
			src = (char *)(src + 1);
		} 
	}else{
		//从后向前拷贝 
		while(count--){
			*(char *)(dest + count) = *(char *)(src + count);
		} 
	}
	return ret;
}
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	my_memmove(arr+3, arr, 20);
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
} 
