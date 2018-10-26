#include <stdio.h>
#include <conio.h>

int main()
{
    int imp=0;
    printf("Think of a number between 1 to 52!\n");
    getch();
    printf("\nHave you thought a number?(y/n)\n");
    char c;
    scanf(" %c",&c);
    if(c=='n'||c=='N')
        exit(0);


    printf("\nIs the number appeared here... \n");// 1
    printf("\n1, 3, 5, 7, 9, 11, 13, 15, 17, 19, \n21, 23, 25, 27, 29, 31, 33, 35, 37, 39, \n41, 43, 45, 47, 49, 51 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\nHow about here... \n");// 2
    printf("\n2, 3, 6, 7, 10, 11, 14, 15, 18, 19, \n22, 23, 26, 27, 30, 31, 34, 35, 38, 39, \n42, 43, 46, 47, 50, 51 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\nAnd here... \n");// 3
    printf("\n4, 5, 6, 7, 12, 13, 14, 15, 20, 21, \n22, 23, 28, 29, 30, 31, 36, 37, 38, 39, \n44, 45, 46, 47, 52 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\n...here ??? \n");// 4
    printf("\n8, 9, 10, 11, 12, 13, 14, 15, 24, \n25, 26, 27, 28, 29, 30, 31, 40, 41, 42, 43, \n44, 45, 46, 47 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\nHmmmm... how about here... \n");// 5
    printf("\n16, 17, 18, 19, 20, 21, 22, 23, 24, \n25, 26, 27, 28, 29, 30, 31, 48, 49, 50, 51, 52 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\nNow here ???... \n");// 5
    printf("\n32, 33, 34, 35, 36, 37, 38, 39, 40, \n41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52 ?(y/n)\n");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
        imp=imp*10+1;
    else
        imp=imp*10+2;

    printf("\nYou thought of : ");
    switch(imp)
    {
        case 122222 : printf("1"); break;
        case 212222	: printf("2"); break;
        case 112222 : printf("3"); break;
        case 221222	: printf("4"); break;
        case 121222 : printf("5"); break;
        case 211222	: printf("6"); break;
        case 111222 : printf("7"); break;
        case 222122	: printf("8"); break;
        case 122122 : printf("9"); break;
        case 212122	: printf("10"); break;
        case 112122 : printf("11"); break;
        case 221122	: printf("12"); break;
        case 121122 : printf("13"); break;
        case 211122	: printf("14"); break;
        case 111122 : printf("15"); break;
        case 222212	: printf("16"); break;
        case 122212 : printf("17"); break;
        case 212212	: printf("18"); break;
        case 112212 : printf("19"); break;
        case 221212	: printf("20"); break;
        case 121212 : printf("21"); break;
        case 211212	: printf("22"); break;
        case 111212 : printf("23"); break;
        case 222112	: printf("24"); break;
        case 122112 : printf("25"); break;
        case 212112	: printf("26"); break;
        case 112112 : printf("27"); break;
        case 221112	: printf("28"); break;
        case 121112 : printf("29"); break;
        case 211112	: printf("30"); break;
        case 111112 : printf("31"); break;
        case 222221	: printf("32"); break;
        case 122221 : printf("33"); break;
        case 212221	: printf("34"); break;
        case 112221 : printf("35"); break;
        case 221221	: printf("36"); break;
        case 121221 : printf("37"); break;
        case 211221	: printf("38"); break;
        case 111221 : printf("39"); break;
        case 222121	: printf("40"); break;
        case 122121 : printf("41"); break;
        case 212121	: printf("42"); break;
        case 112121 : printf("43"); break;
        case 221121	: printf("44"); break;
        case 121121 : printf("45"); break;
        case 211121	: printf("46"); break;
        case 111121 : printf("47"); break;
        case 222211	: printf("48"); break;
        case 122211 : printf("49"); break;
        case 212211	: printf("50"); break;
        case 112211 : printf("51"); break;
        case 221211	: printf("52");

    }

    printf("\n");
    getch();
}
