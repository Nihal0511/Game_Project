
#include<stdio.h>
int main()
{ 	
	printf("Welcome to the game of rock paper and scissors\n\n");
	int n;
	printf("Enter the number of rounds u want to play. The maximum limit is 5: ");	scanf("%d",&n);
	if(n>5)
	{
		printf("Too many rounds. Please choose 5 or less than\n\n");
	}	
	else
	{
	int i=1,j=0;
	for(i=1;i<=n;i++)
	{
	int X;
	printf("\n\n");
	printf("Enter 1 for rock, 2 for paper and 3 for scissors: ");
	scanf("%d",&X);
	if(i==1)	
	{	
		switch(X)	{
		case 1:
			printf("You Loss\nComputer chose paper\n\n");
			break;
			case 2:
				printf("You Loss\nComputer chose scissor\n\n");
				break;
				case 3:
					printf("You Win\nComputer chose paper\n\n"); 
					j++;
					break;
					default:
						printf("Invalid Choice\n\n");
						break;
	}	
}
	if(i==2)	
	{
		switch(X){
		case 1:
			printf("You Win\nComputer chose Scissors\n\n");
			j++;
			break;
			case 2:
				printf("Draw\nComputer chose Paper\n\n");
				break;
				case 3:
					printf("You loss\nComputer chose rock\n\n"); 
					//j++;
					break;
					default:
						printf("Invalid Choice\n\n");
						break;
					}
	}
	if(i==3)	
	{	
		switch(X){
		case 1:
			printf("You loss\nComputer chose paper\n\n");
			break;
			case 2:
				printf("You win\nComputer chose Paper\n\n");
				j++;
				break;
				case 3:
					printf("You win\nComputer chose Rock\n\n"); 
					j++;
					break;
					default:
						printf("Invalid Choice\n\n");
						break;
					}
	}
	if(i==4)	
	{
		switch(X){	
		case 1:
			printf("You win\nComputer chose Scissors\n\n");
			j++;
			break;
			case 2:
				printf("You loss\nComputer chose Scissors\n\n");
			//	j++;
				break;
				case 3:
					printf("Draw\nComputer chose Scissors\n\n"); 
				//	j++;
					break;
					default:
						printf("Invalid Choice\n\n");
						break;
					}
			
		}	
		if(i==5)	
		{	
		switch(X){	
		case 1:
			printf("You win\nComputer chose Scissors\n\n");
			j++;
			break;
			case 2:
				printf("Draw\nComputer chose Paper\n\n");
			//	j++;
				break;
				case 3:
					printf("You loss\nComputer chose Rock\n\n"); 
				//	j++;
					break;
					default:
						printf("Invalid Choice\n\n");
						break;
					}
		}
		}	
	printf("The game is over\nYou win %d times out of %d times",j,n);
}	
	return 0;
}
	

