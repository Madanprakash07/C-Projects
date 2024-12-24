#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, start, end, attempts;
    start = 1, end = 10;
    srand(time(0));

    int answer = (rand() % start) + end;


    printf("\nGuess a number between %d and %d : ",start,end);
    do
    {
        
        scanf("%d",&guess);
        if (guess==answer)
        {
            printf("\nCongratulations !, Correct answer");
        }
        else if (guess < answer)
        {
            printf("\nNumber's too low, try again\t");
        }
        else
        {
            printf("\nNumber's too high, try again\t\n");
        }        
        
        attempts++ ;
    } while (guess != answer);


    printf("-------------------------------\n");
    printf("Answer is : %d\n",answer);
    printf("No of attempts : %d",attempts);
    
}