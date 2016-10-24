// More practice with scanf
// File scanf2_example.c

// PIZZA!!!

main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

// User must enter $ before the cost

    printf("How much does a slice of pizza cost in your area?\n");
    printf("Enter as $XX.XX \n");
    scanf(" $%f", &cost);

// Pizza topping is a character array, so no need for '&' before variable

    printf("What is your favorite one-word pizza topping?\n");
    scanf(" %s", topping);

    printf("How many slices of %s pizza ", topping);
    printf("can you eat in one sitting?");
    scanf(" %d", &slices);

    printf("What is today's date? Enter in mm/dd/yy format.\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost * slices);

    return 0;
}
