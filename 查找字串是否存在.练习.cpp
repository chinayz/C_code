#include<stdio.h>
#include<assert.h> 

char* my_strstr(const char *p1, const char *p2){
	assert(p1 != NULL);
	assert(p2 != NULL);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur = (char *)p1;
	while(*p2 == '\0'){
		return (char *)p1;
	}
	while(*cur != '\0'){
		s1 = cur;
		s2 = (char *)p2;
		while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)){
			s1++;
			s2++;
		}
		if(*s2 == '\0'){
			return cur;//找到子串 
		}
		if(*s1 == '\0'){
			return NULL;
		} 
		cur++;
	}
	return NULL;//找不到子串 
}

int main(){
	char *p1 = "abcdef";
	char *p2 = "def";
	char *ret = my_strstr(p1, p2);
	if(ret == NULL){
		printf("字串找不到\n");
	}else{
		printf("%s\n", ret);
	}
	return 0;
}
