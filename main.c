#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

static char input[2048];

int main(int argc, char ** argv) {
	int r2 = puts("My lisp v0.0.1");
	int r1 = puts("Pres Ctrl+c to Exit\n");

	if (r1 == EOF) perror("puts()");
	if (r2 == EOF) perror("puts()");

	while (1) {
		fputs("lisp> ", stdout);
		fgets(input, 2048, stdin); // more than 2047 characters leaks over (fgets does not flush)?
		printf("%s", input);
	}

	return 0;
}
