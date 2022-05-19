#include<stdio.h>
#include<string.h>
#include<assert.h> 

char* my_strstr(char *p1,  char *p2){
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = p1;
	char *s2 = p2;
	char *cur = p1;
	while(*p2 == '\0'){
		return p1;
	}
	while(cur != '\0'){
		s1 = cur;
		s2 = p2;
		while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)){
			s1++;
			s2++;
		}
		if(*s2 == '\0'){
			return cur;//�ҵ��Ӵ� 
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ� 
}

int main(){
	char *p1 = "abcdef";
	char *p2 = "def";
	char *ret = my_strstr(p1, p2);
	if(ret == NULL){
		printf("�ִ��Ҳ���\n");
	}else{
		printf("%s\n", ret);
	}
	return 0;
}
