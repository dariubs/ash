#include <stdio.h>

#define MAX_STRING_LEN 255

void loop();

int main(int argc, char *argv[]){
	// welcome message
	printf("Welcome to ash\n===============\n\n");

	// shell loop
	loop();

	// Exit message
	printf("\n**bye.**\n");

	return 0;
}

void loop(){

	char command[MAX_STRING_LEN] = "";

	for(;;){
		// shell prompt
		printf("➜ ");

		// Get command from keyboard
		scanf("%s",command);

		// exit command
		if(!strcmp(command,"exit"))
			return ;

		// general command message
		printf("%s\n",command);
	}
}
