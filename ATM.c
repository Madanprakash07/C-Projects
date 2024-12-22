#include <stdio.h>

int main()
{
    int choice, pin, pincorrect, balance;
    pincorrect = 0;
    balance = 2500;


    printf("\n");
    printf("\n");
    printf("\n");
    printf("-------------Welcome to MADDY'S BANK-------------\n");
    
    do
    {
        if(pincorrect == 0)
        {
            printf("Enter you pin : ");
            scanf("%d",&pin);
        
            while(pin != 2025)
            {   
                printf("Incorrect Pin, please enter again\n");
                scanf("%d",&pin);
            }

            pincorrect = 1;
        }

        printf("1. Check Balance\n");
    	printf("2. Withdraw Cash\n");
	    printf("3. Deposit Cash\n");
	    printf("4. Exit\n");
        printf("--------------------------------------------------\n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        
        if(choice != 4)
        {
            balance = operations(choice,balance);
        }
        
    }while(choice != 4);

    printf("--------------------------------------------------\n");
    printf("Thank you for visiting");
}

int operations(int choice, int balance)
{
    int pin, withdraw_amount, deposit_amount;
    if (choice == 1)
    {
        printf("Your available balance : %d\n",balance);
        printf("--------------------------------------------------\n");
    }

    else if(choice == 2)
    {
        printf("Enter amount in rupees (max limit : 50000) : \n ");
        scanf("%d",&withdraw_amount);
        if(withdraw_amount < balance)
        {
            if(withdraw_amount < 50000)
            {
                printf("Please collect your cash\n");
                balance -= withdraw_amount;
            }
            else
            {
                printf("Amount exceeding maximum limit, please try again\n");
            }
        }
        else
        {
            printf("Insufficient balance\n");
        }
    }
        
    else
    {
        printf("Enter amount in rupees\n");
        scanf("%d",&deposit_amount);
        balance += deposit_amount;
        printf("Successfully deposited\n");
        printf("--------------------------------------------------\n");
        
    }

    return balance;

}