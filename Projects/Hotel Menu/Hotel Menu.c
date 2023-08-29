#include <stdio.h>
#include <string.h>
#include <time.h>

void hotellogo();
void hotelmenu(); 

int main() {
    int choice, quantity;
    float price;
    float total = 0;
    int quan =0;
    char name[100], mobile[10];
    time_t t;
    time(&t);
    
    //Printing Hotel Logo
    hotellogo();

   // get user name
    printf("\033[1m"); printf("Enter your Name: "); printf("\033[0m");
    
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // remove newline character from input
    printf("\033[1;35m"); printf("Hello %s\n", name); printf("\033[0m");
    // open file for writing
    FILE *file = fopen("Final Bill.txt", "a+");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (1)
    {
    hotelmenu();
        // get user choice
        printf("\033[1;36m"); printf("Enter your choice: "); printf("\033[0m");
        scanf("%d", &choice);
        
        if (choice == 13) {
            // exit program and print bill to terminal
            printf("\033[1;32m");printf("\n                                                       WE ARE ON BORADING YOUR FOOD ORDER! Please Wai!!t\n");printf("\033[0m");
            printf("\033[1;33m"); printf("\n\n\t\t\t\t******* BILL *******\n");                                 printf("\033[0m");
            printf("\033[1;35m"); printf("\t\tName:: %s\n", name); printf("\t\tDay & Time:: %s\n", ctime(&t));  printf("\033[0m");
            printf("\033[1;32m"); printf("\t\t        Items\t\t\t\tPrice\n");                                   printf("\033[0m");
            printf("\033[1m");    printf("\t\t----------------------------------------------------\n");         printf("\033[0m");
            printf("\033[1;36m"); printf("\t\tTotal\t %d\t\t\t\tRs %.2f\n", quan,total);                        printf("\033[0m");
            printf("\033[1;32m"); printf("\t\tThank you for your order!\n");                                    printf("\033[0m");
            printf("\033[1;32m"); printf("\t\tPlease Visit Again!\n");                                          printf("\033[0m");


            fprintf(file,"\n\n\t\t\t\t******* BILL *******\n");
            fprintf(file,"\t\tName:: %s\n", name); fprintf(file,"\t\tDay & Time:: %s\n", ctime(&t));
            fprintf(file,"\t\t        Items\t\t\t\tPrice\n");
            fprintf(file,"\t\t----------------------------------------------------\n");
            fprintf(file,"\t\tTotal\t %d\t\t\t\tRs %.2f\n", quan,total);
            fprintf(file,"\t\tThank you for your order!\n");
            fprintf(file,"\t\tPlease Visit Again!\n");
            return 0;

        } else if (choice >= 1 && choice <= 12) {
            // get quantity of food item
            printf("\033[1;36m"); printf("Enter quantity: "); printf("\033[0m");
            scanf("%d", &quantity);
            
            // calculate price and add to total
            switch (choice) {
                case 1:
                    price = 30;
                    break;
                case 2:
                    price = 50;
                    break;
                case 3:
                    price = 40;
                    break;
                case 4:
                    price = 50;
                    break;
                case 5:
                    price = 100;
                    break;
                case 6:
                    price = 200;
                    break;
                case 7:
                    price = 200;
                    break;
                case 8:
                    price = 50;
                    break;
                case 9:
                    price = 80;
                    break;
                case 10:
                    price = 140;
                    break;
                case 11:
                    price = 100;
                    break;
                case 12:
                    price = 150;
                    break;
            }
            
            total += price * quantity;
            quan+=quantity;
            printf("\033[1;33m"); printf("%d item(s) of Rs %.2f each added to Cart.\n", quantity, price); printf("\033[0m");
        } else {
            printf("\033[1;31m"); printf("Invalid choice. Try again.\n"); printf("\033[0m");
        }
    }
}

void hotellogo()
{
    printf("\033[0;33m");
    printf("\t\t\t  ******************************************************************************************************************\n");
    printf("\t\t\t  * ************************************************************************************************************** *\n");
    printf("\033[0m");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("       *****       ***   **********      ******     **   **       **   ******        **    **       **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      ***  **      ***       **          **   **    **   **       **   ******        **    **       **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      **    *     ** **      **          **    *    **   ***      **   **            **    ***      **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      **          ** **      **          **    **   **   ****     **   **            **    ****     **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      ***         *  **      **          **     *   **   ****     **   **            **    ****     **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("       ****      **   **     **          **     *   **   ** **    **   ******        **    ** **    **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("         ****    **   **     **          **     *   **   **  *    **   ******        **    **  *    **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("           **    *     *     **          **     *   **   **  **   **   **            **    **  **   **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("            **  *********    **          **     *   **   **   *   **   **            **    **   *   **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      *     **  **     **    **          **    **   **   **   **  **   **            **    **   **  **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      **    **  *       *    **          **    **   **   **    ** **   **            **    **   **  **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("      *** ***  **       **   **          **   **    **   **      ***   **            **    **    ** **      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");printf("\t\t\t  * *");printf("\033[0m");printf("\033[1;31m");
    printf("       *****   **       **   **          ******     **   **      ***   ******        **    **      ***      "); printf("\033[0m");printf("\033[0;33m");printf("* *");printf("\033[0m");printf("\n");
    printf("\033[0;33m");
    printf("\t\t\t  * ************************************************************************************************************** *\n");
    printf("\t\t\t  ******************************************************************************************************************\n");
    printf("\033[0m");

}

void hotelmenu()
{
printf("\033[1;36m");
    printf("\n\n                                                  ********************* Welcome to SAT DINE IN *****************\n\n");printf("\033[1m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf("                        Hotel Menu                    "); printf("\033[1;31m");printf("     | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf("Item Name            Price");printf("\033[1;31m");printf(" | ");printf("\033[0m");   printf(" Item Name             Price");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf(" 1.Starbucks Samosa    30 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf(" 2.Nike ki Chawmeen       50");printf("\033[0m");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf(" 3.Adidas Idli         40 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf(" 4.Allen Solly Dosa       50");printf("\033[0m");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf(" 5.Mujhe Nahi Khana   100 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf(" 6.Kuch bhi dedo         200 ");printf("\033[0m");printf("\033[1;31m");printf(" | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf(" 7.Burgger            200 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf(" 8.Jo Tumko Pasand ho     50");printf("\033[0m");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf(" 9.Bheja fry           80 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf("10.Tandoori Chiken       140");printf("\033[0m");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  | ");printf("\033[0m");
    printf("11.Paneer masala      100 ");printf("\033[1;31m");printf(" | ");printf("\033[0m");printf("12.Mujhe menu Dekhna Tha 150");printf("\033[0m");printf("\033[1;31m");printf("  | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  ");printf("\033[0m");
printf("\033[1;31m");printf("| ");printf("\033[0m");printf("                   13. Order Kar Na                 ");printf("\033[0m");printf("\033[1;31m");printf("       | \n");printf("\033[0m");
printf("\033[1;31m");    printf("                                                  |************************************************************|\n");printf("\033[0m"); 
printf("\033[1;31m");    printf("                                                  |************************************************************|\n\n");printf("\033[0m");
}