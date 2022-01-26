#include <stdio.h>

void printboard(int*);
void printboardstraight(int*);

int main()
{
	int k=0;
	int board[3][3];
	int i = 0;
	int y = 0;
	for(i=0; i<3; i++)
		for(y=0; y<3;y++)
			board[i][y] = ++k;
	
	board[1][1] = 9;
			
	printboard(&board[0][0]);
	printf("\n");
	printboardstraight(&board[0][0]);
	
	return 0;
}

void printboard(int* b)
{
	int offset = 0;
	int i = 0, y = 0;
	for(i=0; i<3; i++)
		for(y=0; y<3; y++)
		{
			printf("%d ", *(b+y+i+offset));
			if(y == 2)
			{
				printf("\n");
				offset += 2;
			}
		}	
}

void printboardstraight(int* b)
{
	int i =0;
	for(i=0; i<9; i++)
	{
		printf("%d ", *(b+i));	
		if((i+1) % 3 == 0)
			printf("\n");
	}
}