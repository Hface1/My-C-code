#include <stdio.h> 
#include <string.h>
int main(void){
	int cnt[26]= {0};
	char a[100];
	scanf("%s",a);
	for(int i=0;a[i] !='\0';i++){
		cnt[a[i]-'a']++;	
	}
	
	
	for(int i=0;a[i]!='\0';i++){
		if(cnt[a[i]-'a']==1){
		printf("%c",a[i]);
		return 0;
		}
		
	}
	printf("no");
	return 0;
}
