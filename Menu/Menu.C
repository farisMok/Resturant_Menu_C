#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
    int choose;
    unsigned int main_choose, side_choose, drink_choose;
    unsigned int burger, pizza, shawarma, broast, falafel;
    unsigned int order_m = 0;
    unsigned int order_s = 0;
    unsigned int order_d = 0;
    unsigned int total = 0;
    unsigned int place, room;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BACKGROUND);
    printf("\n\n\t\t        ----------------\n\t\t       |");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BACKGROUND | BACKGROUND_BLUE | BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    printf(" Resturant Menu ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR_BACKGROUND);
    printf("|\n\t\t        ----------------\n\n");

    do {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN);
        printf("\n Main Meals (1)\n Side Meals (2)\n Drinks (3)\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
        printf("\n To finish your order (0) \n\n");
        scanf(" %d", &choose);

        switch (choose) {

        case 1:
            do {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
                printf("\n\n Burgers (1) \t Pizza (2) \t Shawarma (3) \t Broast (4) \t Falafel (5)\n");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                printf("\n Go Back (0) \n");
                scanf(" %u", &main_choose);

                switch (main_choose) {

                case 1:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
                    printf("\n\n Cheese Burger (1) | SR 18\n\n Crispy Chicken Burger (2) | SR 22\n\n Brisket Burger (3) | SR 25\n\n Angus Burger (4) | SR 23\n\n Chicken Fillet Burger (5) | SR 20\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                    printf("\n Go Back (0) \n");
                    scanf(" %u", &burger);

                    switch (burger) {

                    case 1:
                        total += 18;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Cheese Burger has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 2:
                        total += 22;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Crispy Chicken Burger has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 3:
                        total += 25;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Brisket Burger has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 4:
                        total += 23;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Angus Burger has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 5:
                        total += 20;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Chicken Fillet Burger has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    default:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                        printf("\n\t No Burger has been added\n\n");
                        break;
                    }
                    break;

                case 2:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
                    printf("\n\n Pepperoni Pizza (1) | SR 30\n\n Steak Pizza (2) | SR 35\n\n Chicken Pizza (3) | SR 30\n\n Margarita Pizza (4) | SR 25\n\n Vegetarian Pizza (5) | SR 25\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                    printf("\n Go Back (0) \n");
                    scanf(" %u", &pizza);
                    switch (pizza) {
                    case 1:
                        total += 30;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Pepperoni Pizza has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 2:
                        total += 35;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Steak Pizza has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 3:
                        total += 30;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Chicken Pizza has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 4:
                        total += 25;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Margarita Pizza has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 5:
                        total += 25;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Vegetarian Pizza has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    default:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                        printf("\n\t No Pizza has been added\n\n");
                        break;
                    }

                    break;

                case 3:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
                    printf("\n\n Meat Shawrama (1) | SR 11\n\n Chicken Shawarma (2) | SR 9\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                    printf("\n Go Back (0) \n");
                    scanf(" %u", &shawarma);
                    switch (shawarma) {
                    case 1:
                        total += 11;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Meat Shawarma has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 2:
                        total += 9;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Chicken Shawarma has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    default:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                        printf("\n\t No Shawrama has been added\n\n");
                        break;
                    }
                    break;
                case 4:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
                    printf("\n\n Regular Broast (1) | SR 13\n\n Spicy Broast (2) | SR 14\n ");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                    printf("\n Go Back (-1) \n");
                    scanf("%u", &broast);
                    switch (broast) {
                    case 1:
                        total += 13;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Regular Broast has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 2:
                        total += 14;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Spicy Broast has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    default:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                        printf("\n\t No Broast has been added\n\n");
                        break;
                    }
                    break;

                case 5:
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN);
                    printf("\n\n Regular Falafel Bag (1) | SR 10\n\n Stuffed Falafel Bag (2) | SR 15\n\n Falafel Sandwich (3) | SR 4\n\n Stuffed Falafel Sandwich (4) | SR 6\n");
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                    printf("\n Go Back (0) \n");
                    scanf("%u", &falafel);
                    switch (falafel) {
                    case 1:
                        total += 10;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Regular Falafel Bag has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 2:
                        total += 15;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Stuffed Falafel Bag has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 3:
                        total += 4;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Falafel Sandwich has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    case 4:
                        total += 6;
                        order_m++;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                        printf("\n\t Stuffed Falafel Sandwich has been added to your cart\n\n");
                        printf("\t Sub Total: %d\n", total);
                        break;
                    default:
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                        printf("\n\t No Falafel has been added\n\n");
                        break;
                    }

                    break;

                default:
                    break;
                }

            } while (main_choose != 0);

            break;

        case 2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
            printf("\n\n French Fries (1) | SR 5\n\n Onion rings (2) | SR 6\n\n Salad (3) | SR 12\n\n Mashed potatoe (4) | SR 8\n\n Hummus (5) | SR 5\n\n Mutabal (6) | SR 5 \n\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("\n Go Back (0) \n");
            scanf("%u", &side_choose);

            switch (side_choose) {

            case 1:
                total += 5;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t French fries has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            case 2:
                total += 6;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Onion rings has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            case 3:
                total += 12;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Salad has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            case 4:
                total += 8;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Mashed potatoe has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            case 5:
                total += 5;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Hummus has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            case 6:
                total += 5;
                order_s++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Mutabal has been added to your cart\n\n");
                printf("\t SubTotal: %d\n", total);
                break;

            default:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                printf("\n\t No Side meals has been added\n\n");
                break;
            }

            break;
        case 3:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY);
            printf("\n\n Pepsi (1) | SR 2\n\n 7UP (2) | SR 2\n\n Miranda (3) | SR 2\n\n Orange juice (4) | SR 4\n\n Tea (5) | SR 3\n\n Coffe (6) | SR 5\n\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
            printf("\n Go Back (0) \n");
            scanf(" %u", &drink_choose);

            switch (drink_choose) {

            case 1:
                total += 2;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Pepsi has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            case 2:
                total += 2;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t 7UP has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            case 3:
                total += 2;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Miranda has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            case 4:
                total += 4;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Orange juice has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            case 5:
                total += 3;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Tea has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            case 6:
                total += 5;
                order_d++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
                printf("\n\t Coffe has been added to your cart\n\n");
                printf("\t SubTotal: %d", total);
                break;

            default:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_BLUE);
                printf(" \t No Drinks has been added\n\n");
                break;
            }

            break;
        }
    } while (choose != 0);


    if (total != 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
        printf("\n\t  Where would you like to eat ?\n");
        printf("\n\t Dine-in (1)\t");
        printf(" Take away (2)\n");
        scanf("%u", &place);
        srand(time(NULL));
        if (place == 1) {
            room = 1 + rand() % (10 - 1 + 1);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
            printf("\n\n\t Please wait in room %u \n", room);
        }
        else if (place == 2) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
            printf("\n\n\t Your order will be ready soon!\n\n");
        }


        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_BLUE);
        printf("\n\n\t You ordered\n\t %u main meal(s)\n\t %u side meal(s)\n\t %u drink(s)\n\n\n", order_m, order_s, order_d);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN);
        printf("\n\n\t Total : SR %u\n\n", total);

    }
    else if (total == 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
        printf("\n\n\tThanks for visiting \n\tCome back soon! \n");
    }

    return 0;
}

