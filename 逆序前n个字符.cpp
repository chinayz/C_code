//������ⷨ 
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void left_move(char *arr, int k){
//	assert(arr != NULL);
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr);
//	for(i = 0; i < k; i++){
//		char tmp = *arr;//����תһ���ַ� 
//		for(j = 0; j < len - 1; j++){
//			*(arr + j) = *(arr + j + 1);//������ַ�������ǰ��һ���ַ� 
//		}
//		*(arr + len - 1) = tmp;//����ߵ��ַ������� 
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr); 
//	return 0;
//}


//������ת��
#include<stdio.h>
#include<string.h>
#include<assert.h>


void reverse(char *left, char *right){
	assert(left != NULL);
	assert(right != NULL);
	while(left < right){
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char *arr, int k){
	assert(arr);
	int len = strlen(arr);
	reverse(arr, arr + k - 1);//�������
	reverse(arr + k, arr + len -1);//�����ұ�
	reverse(arr, arr + len - 1);//�������� 
} 

int main(){
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
} 















