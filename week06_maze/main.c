#include<stdio.h>
#define MAZE_SIZE 6
#define MAX_STACK_SIZE 100

typedef struct {
	short r;
	short c;
}StackObject;

StackObject stack[MAX_STACK_SIZE];
int top = -1;
StackObject here = { 1, 0 }, entry = { 1, 0 };
// here : 현재 위치 entry : 시작 위치

char maze[MAZE_SIZE][MAZE_SIZE] = {
{'1', '1', '1', '1', '1', '1' },
{'e', '0', '1', '0', '0', '1' },
{'1', '0', '0', '0', '1', '1' },
{'1', '0', '1', '0', '1', '1' },
{'1', '0', '1', '0', '0', 'x' },
{'1', '1', '1', '1', '1', '1' },
};

void initialize() {
	top = -1;
}

int isEmpty() {
	return (top == -1);
}

int isFull() {
	return (top == MAX_STACK_SIZE - 1);
}

void push(StackObject item) {
	if (isFull()) {
		printf("Stack is full!\n");
	}
	else {
		stack[++top] = item;
	}
}

StackObject pop() {
	if (isEmpty()) {
		printf("Stack is empty!\n");
	}
	else return stack[top--];
}

void PushLoc(int r, int c) {
	if (r < 0 || c < 0) return;
	if (maze[r][c] != '1' && maze[r][c] != '.') {
		StackObject tmp;
		tmp.r = r;
		tmp.c = c;
		push(tmp);
	}
}

void printMaze(char m[MAZE_SIZE][MAZE_SIZE]) {
	for (int r = 0; r < MAZE_SIZE; r++) {
		for (int c = 0; c < MAZE_SIZE; c++) {
			if (r == here.r && c == here.c) {
				printf("e ");
			}
			else {
				if (m[r][c] == '0') printf("0 ");
				else printf("%c ", m[r][c]);
			}
		}
		printf("\n");
	}
	printf("\n");
}

void printStack() {
	for (int i = 0; i < 5; i++) {
		printf("|      |\n");
	}
	for (int i = top; i >= 0; i--) {
		printf("|(%01d, %01d)|\n", stack[i].r, stack[i].c);
	}
	printf("--------\n");
}

int main() {
	int r, c;
	here = entry;
	printMaze(maze);
	printStack();
	while (maze[here.r][here.c] != 'x') {
		r = here.r;
		c = here.c;
		printMaze(maze);

		maze[r][c] = '.'; //방문한 곳은 .으로 표시
		PushLoc(r - 1, c);
		PushLoc(r + 1, c);
		PushLoc(r, c - 1);
		PushLoc(r, c + 1);
		printStack();
		if (isEmpty()) return 0;
		else here = pop();
		printMaze(maze);
		printStack();
	}
}