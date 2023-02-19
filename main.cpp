#include "header.hpp"

int main()
{
    int choice = 0;

    printf("Only One\n");

    system("pause");
    system("cls");

    printf("Enter 1 to play as the Protagonist\n Enter 2 to play as the Antagonist\n");    
    
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            protagonist();
            break;
        case 2:
            antagonist();
            break;
    }



    return 0;
}