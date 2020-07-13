/* 
* This program can compiler a INT c code 
* 
* Author: 	Arthur Chang
* date:		2020/07/13
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2){
		fprintf(stderr, "Parameter count is wrong\n");
		return 1;
	}

	printf(".intel_syntax noprefix\n");
	printf(".global main\n");
	printf("main:\n");
	printf("  mov rax, %d\n", atoi(argv[1]));
	printf("  ret\n");
	return 0;
}
