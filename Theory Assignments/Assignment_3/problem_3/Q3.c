#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateEmail(char* email){
    int at_count = 0;
    int dot_count = 0;
    
    int len = strlen(email);
    int index = len;
    for(int i=0; i<len; i++){
        if(email[i] == '@'){
            at_count += 1;
            index = i;
        }
        else if(email[i]=='.'){
        	if(i>index){
        		dot_count += 1;
			}
		}
        
    }
    if(at_count == 1 && dot_count >= 1 && len > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char *email;
    email = (char *)malloc(50*sizeof(char));
    printf("Enter the email address: ");
    scanf("%s", email);
    int res = validateEmail(email);
    if(res){
        printf("Valid Email\n");
    }
    else{
        printf("Invalid Email\n");
    }
    free(email);
    return 0;
}
