#include <stdio.h>
#include <string.h>


int main()
{
    char questions[7][100] = {   "Who founded Microsoft ?",
                                 "Who is world's richest person as on 2024 ?",
                                 "Who killed Daenerys Targaryen ?",
                                 "What was Captain America's real name ?",
                                 "Which player has 100 international centuries ?",
                                 "Which country won the FIFA world cup 2022 ?",
                                 "Finally, who created this quiz ?"
                            };

    char correct_answers[7][100] = {    "Bill Gates",
                                        "Elon Musk", 
                                        "Jon Snow", 
                                        "Steve Rogers", 
                                        "Sachin Tendulkar", 
                                        "Argentina", 
                                        "Madan" 
                                    };

    char answers[7][100];

    int size = sizeof(questions)/sizeof(questions[1]);
    int marks = 0;



    printf("Welcome to quiz game\n");
    for (int i = 0; i < size; i++)
    {
        printf("---------------------------\n");
        printf("%s\n",questions[i]);
        printf("Your answer : ");

        fgets(answers[i], 100, stdin);
        answers[i][strcspn(answers[i], "\n")] = '\0';


        if (strcmp(answers[i], correct_answers[i]) == 0)
        {
            marks++;
        }        
    }

    printf("------------------------\n");
    printf("Congrats !, You have scored %d marks",marks);



    
    


}