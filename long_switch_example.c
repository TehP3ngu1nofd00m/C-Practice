// File - long_switch_example.c

/* This program presents a menu of decades to choose from
then after user input, presents a secondary menu. After
input again, the program will display relevant info from
the chosen time period. */

#include <stdio.h>
#include <stdlib.h> // In order to use exit()

int main()
{
    // Two variables for main menu and secondary menu choices
    int choice1, choice2;

    printf("Which decade do you want to explore?\n");
    printf("1. The 1980\'s\n");
    printf("2. The 1990\'s\n");
    printf("3. The 2000\'s\n");
    printf("4. Quit\n");

    // Do-While loop makes sure a menu choice is made
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);

        switch (choice1)
        {
            // 1980s sub-menu
            case (1):
                {
                    printf("\n\nWhat would you like to see?\n");
                    printf("1. Baseball\n");
                    printf("2. The Movies\n");
                    printf("3. US presidents\n");
                    printf("4. Quit\n");

                    printf("Please enter your choice: ");
                    scanf("%d", &choice2);

                    if (choice2 == 1) // Baseball
                    {
                        printf("\n\nWorld Series Champions of the 1980s:\n");
                        printf("1980: Philadelphia Phillies\n");
                        printf("1981: Los Angeles Dodgers\n");
                        printf("1982: St. Louis Cardinals\n");
                        printf("1983: Baltimore Orioles\n");
                        printf("1984: Detroit Tigers\n");
                        printf("1985: Kansas City Royals\n");
                        printf("1986: new York Mets\n");
                        printf("1987: Minnesota Twins\n");
                        printf("1988: Los Angeles Dodgers\n");
                        printf("1989: Oakland A\'s\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 2) // The Movies
                    {
                        printf("\n\nOscar-Winning Movies in the 1980s:\n");
                        printf("1980: Ordinary  People\n");
                        printf("1981: Chariots of Fire\n");
                        printf("1982: Ghandi\n");
                        printf("1983: Terms of Endearment\n");
                        printf("1984: Amadeus\n");
                        printf("1985: Out of Africa\n");
                        printf("1986: Platoon\n");
                        printf("1987: The Last Emperor\n");
                        printf("1988: Rain Man\n");
                        printf("1989: Driving Miss Daisy\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 3) // US Presidents
                    {
                        printf("\n\nUS Presidents in the 1980s");
                        printf("1980: Jimmy Carter\n");
                        printf("1981-1988: Ronald Reagan\n");
                        printf("1989: George H.W. Bush");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 4) // Exit
                    {
                        exit(0);
                    } else
                    {
                        printf("Sorry, that's not a valid choice!\n");
                        break;
                    }
                }
            // The 1990s sub-menu
            case (2):
                {
                    printf("\n\nWhat would you like to see?\n");
                    printf("1. Baseball\n");
                    printf("2. The Movies\n");
                    printf("3. US presidents\n");
                    printf("4. Quit\n");

                    printf("Please enter your choice: ");
                    scanf("%d", &choice2);

                    if (choice2 == 1) // Baseball
                    {
                        printf("\n\nWorld Series Champions of the 1990s");
                        printf("1990: Cincinnati Reds\n");
                        printf("1991: Minnesota Twins\n");
                        printf("1992: Toronto Blue Jays\n");
                        printf("1993: Toronto Blue Jays\n");
                        printf("1994: -no world series-\n");
                        printf("1995: Atlanta Braves\n");
                        printf("1996: New York Yankees\n");
                        printf("1997: Florida Marlins\n");
                        printf("1998: New York Yankees\n");
                        printf("1999: New York Yankees\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 2) // The Movies
                    {
                        printf("\n\nOscar-Winning Movies in the 1990s:\n");
                        printf("1990: Dances With Wolves\n");
                        printf("1991 The Silence of the Lambs\n");
                        printf("1992: Unforgiven\n");
                        printf("1993: Schindler\'s List\n");
                        printf("1996: The English Patient\n");
                        printf("1997: Titanic\n");
                        printf("1988: Shakespeare in Love\n");
                        printf("1999: American Beauty\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 3) // US Presidents
                    {
                        printf("\n\nUS Presidents in the 1990s:\n");
                        printf("1990-1992: George H.W. Bush\n");
                        printf("1993-1999: Bill Clinton\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 4) // Exit
                    {
                        exit(0);
                    } else
                    {
                        printf("Sorry, that's not a valid choice!\n");
                        break;
                    }
                }
            // The 2000s sub-menu
            case (3):
                {
                    printf("\n\nWhat would you like to see?\n");
                    printf("1. Baseball\n");
                    printf("2. The Movies\n");
                    printf("3. US presidents\n");
                    printf("4. Quit\n");

                    printf("Please enter your choice: ");
                    scanf("%d", &choice2);

                    if (choice2 == 1) // Baseball
                    {
                        printf("\n\nWorld Series Champions of the 2000s\n");
                        printf("2000: New York Yankees\n");
                        printf("2001: Arizona Diamondbacks\n");
                        printf("2002: Anaheim Angels\n");
                        printf("2003: Florida Marlins\n");
                        printf("2004: Boston Red Sox\n");
                        printf("2005: Chicago White Sox\n");
                        printf("2006: St. Louis Cardinals\n");
                        printf("2007: Boston Red Sox\n");
                        printf("2008: Philadelphia Phillies\n");
                        printf("2009: New York Yankees\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 2) // The Movies
                    {
                        printf("\n\nOscar-Winning Movies in the 2000s:\n");
                        printf("2000: Gladiator\n");
                        printf("2001: A Beautiful Mind\n");
                        printf("2002: Chicago\n");
                        printf("2003: The Lord of the Rings: The Return of the King\n");
                        printf("2004: Million Dollar Baby\n");
                        printf("2005: Crash\n");
                        printf("2006: Departed\n");
                        printf("2007: No Country for Old Men\n");
                        printf("2008: Slumdog Millionaire\n");
                        printf("2009: The Hurt Locker\n");
                        printf("\n\n\n");
                        break;
                    } else if (choice2 == 3) // US Presidents
                    {
                        printf("\n\nUS Presidents in the 2000s:\n");
                        printf("2000: Bill Clinton\n");
                        printf("2001-2008: George \"Dubya\" Bush\n");
                        printf("2009: Barack Obama\n");
                        break;
                    } else if (choice2 == 4) // Exit
                    {
                        exit(0);
                    } else
                    {
                        printf("Sorry, that's not a valid choice!\n");
                        break;
                    }
                }
            case (4):
                exit (0);

            default: printf("\n%d is not a valid choice.\nPlease Try again.\n", choice1);
                     break;
        }
    } while ((choice1 < 1) || (choice1 > 4));

    return 0;
}
