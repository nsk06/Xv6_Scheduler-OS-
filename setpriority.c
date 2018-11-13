#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char * argv[])
{
	if(argc < 3)
	{
		printf(1,"Incorrect usage of command\n");
		exit();
	}
	int pd = atoi(argv[1]);
	int prior = atoi(argv[2]);
	if(prior < 0)
	{
		printf(1,"error cant be negaitve\n");
		exit();
	}
	else if(prior > 100)
	{
		printf(1,"priority cant be greatere than 100\n");
		exit();
	}
	sp(pd,prior);	
	exit();
}