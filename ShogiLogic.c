#include <stdio.h>
#include "ShogiPiece.h"
#include "ShogiLogic.h"


void titlePrint()
{
	char* piano1 = "もしもピアノが弾けたなら\n";
	char* piano2 = "思いのすべてを歌にして\n";
	char* piano3 = "君に伝えることだろう\n";
	char* title = "将棋project\n";

	printf("%s\n", piano1);
	printf("%s\n", piano2);
	printf("%s\n", piano3);
	printf("%s\n", title);
}

void spacePrint() 
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}

/*駒の初期位置関数(9×9：改行×9：合計90)*/
/************************/
/* 香桂銀金玉金銀桂香\n */
/* 　飛　　　　　角　\n */
/* 歩歩歩歩歩歩歩歩歩\n */
/* 　　　　　　　　　\n */
/* 　　　　　　　　　\n */
/* 　　　　　　　　　\n */
/* 歩歩歩歩歩歩歩歩歩\n */
/* 　角　　　　　飛　\n */
/* 香桂銀金玉金銀桂香\n */
/************************/
void startPrint()
{
	for (int i = 1; 90 >= i; i++)
	{
		/*歩*/
		if ((i >= 21 && i <= 29) || (i >= 61 && i <= 69))
		{
			printf("%s", HU);
		}
		/*改行コード*/
		else if ((i % 10) == 0)
		{
			printf("%s", "\n");
		}
		/*香車*/
		else if (i == 1 || i == 9 || i == 81 || i == 89)
		{
			printf("%s", KYOUSYA);
		}
		/*桂馬*/
		else if (i == 2 || i == 8 || i == 82 || i == 88)
		{
			printf("%s", KEIMA);
		}
		/*銀*/
		else if (i == 3 || i == 7 || i == 83 || i == 87)
		{
			printf("%s", GIN);
		}
		/*金*/
		else if (i == 4 || i == 6 || i == 84 || i == 86)
		{
			printf("%s", KIN);
		}
		/*玉*/
		else if (i == 5 || i == 85)
		{
			printf("%s", GYOKU);
		}
		/*飛車*/
		else if (i == 12 || i == 78)
		{
			printf("%s", HISYA);
		}
		/*角*/
		else if (i == 18 || i == 72)
		{
			printf("%s", KAKU);
		}
		/*空白*/
		else
		{
			printf("%s", SPACE);
		}
	}

}




void start2(int x, char a, int y, char b)
{
	for (int i = 1; 90 >= i; i++)
	{
		/* 移動 */
		if (i == x)
		{
			conv2(a);
		}
		/* 削除 */
		else if (i == y)
		{
			conv2('x');
		}
		/*歩*/
		else if ((i >= 21 && i <= 29) || (i >= 61 && i <= 69))
		{
			printf("%s", HU);
		}
		/*改行コード*/
		else if ((i % 10) == 0)
		{
			printf("%s", "\n");
		}
		/*香車*/
		else if (i == 1 || i == 9 || i == 81 || i == 89)
		{
			printf("%s", KYOUSYA);
		}
		/*桂馬*/
		else if (i == 2 || i == 8 || i == 82 || i == 88)
		{
			printf("%s", KEIMA);
		}
		/*銀*/
		else if (i == 3 || i == 7 || i == 83 || i == 87)
		{
			printf("%s", GIN);
		}
		/*金*/
		else if (i == 4 || i == 6 || i == 84 || i == 86)
		{
			printf("%s", KIN);
		}
		/*玉*/
		else if (i == 5 || i == 85)
		{
			printf("%s", GYOKU);
		}
		/*飛車*/
		else if (i == 12 || i == 78)
		{
			printf("%s", HISYA);
		}
		/*角*/
		else if (i == 18 || i == 72)
		{
			printf("%s", KAKU);
		}
		/*空白*/
		else
		{
			printf("%s", SPACE);
		}
	}

}

void conv2(char a)
{
	switch (a)
	{
	case 'f':
		printf("%s", HU);
		break;
	case 'y':
		printf("%s", KYOUSYA);
		break;
	case 'u':
		printf("%s", KEIMA);
		break;
	case 'g':
		printf("%s", GIN);
		break;
	case 'a':
		printf("%s", KIN);
		break;
	case 'o':
		printf("%s", GYOKU);
		break;
	case 'h':
		printf("%s", HISYA);
		break;
	case 'k':
		printf("%s", KAKU);
		break;
	case 'x':
		printf("%s", SPACE);
		break;
	case 'z':
		printf("%s", "\n");
		break;

	default:
		printf("%s", "aaaaaaaa");
		break;
	}
}




int conv(int x)
{
	switch (x)
	{

	case _ONE:
		return 1;
	case _TWO:
		return 2;
	case _THREE:
		return 3;
	case _FOUR:
		return 4;
	case _FIVE:
		return 5;
	case _SIX:
		return 6;
	case _SEVEN:
		return 7;
	case _EIGHT:
		return 8;
	case _NINE:
		return 9;
	case _ONE_ONE:
		return 11;
	case _ONE_TWO:
		return 12;
	case _ONE_THREE:
		return 13;
	case _ONE_FOUR:
		return 14;
	case _ONE_FIVE:
		return 15;
	case _ONE_SIX:
		return 16;
	case _ONE_SEVEN:
		return 17;
	case _ONE_EIGHT:
		return 18;
	case _ONE_NINE:
		return 19;
	case _TWO_ONE:
		return 21;
	case _TWO_TWO:
		return 22;
	case _TWO_THREE:
		return 23;
	case _TWO_FOUR:
		return 24;
	case _TWO_FIVE:
		return 25;
	case _TWO_SIX:
		return 26;
	case _TWO_SEVEN:
		return 27;
	case _TWO_EIGHT:
		return 28;
	case _TWO_NINE:
		return 29;
	case _THREE_ONE:
		return 31;
	case _THREE_TWO:
		return 32;
	case _THREE_THREE:
		return 33;
	case _THREE_FOUR:
		return 34;
	case _THREE_FIVE:
		return 35;
	case _THREE_SIX:
		return 36;
	case _THREE_SEVEN:
		return 37;
	case _THREE_EIGHT:
		return 38;
	case _THREE_NINE:
		return 39;
	case _FOUR_ONE:
		return 41;
	case _FOUR_TWO:
		return 42;
	case _FOUR_THREE:
		return 43;
	case _FOUR_FOUR:
		return 44;
	case _FOUR_FIVE:
		return 45;
	case _FOUR_SIX:
		return 46;
	case _FOUR_SEVEN:
		return 47;
	case _FOUR_EIGHT:
		return 48;
	case _FOUR_NINE:
		return 49;
	case _FIVE_ONE:
		return 51;
	case _FIVE_TWO:
		return 52;
	case _FIVE_THREE:
		return 53;
	case _FIVE_FOUR:
		return 54;
	case _FIVE_FIVE:
		return 55;
	case _FIVE_SIX:
		return 56;
	case _FIVE_SEVEN:
		return 57;
	case _FIVE_EIGHT:
		return 58;
	case _FIVE_NINE:
		return 59;
	case _SIX_ONE:
		return 61;
	case _SIX_TWO:
		return 62;
	case _SIX_THREE:
		return 63;
	case _SIX_FOUR:
		return 64;
	case _SIX_FIVE:
		return 65;
	case _SIX_SIX:
		return 66;
	case _SIX_SEVEN:
		return 67;
	case _SIX_EIGHT:
		return 68;
	case _SIX_NINE:
		return 69;
	case _SEVEN_ONE:
		return 71;
	case _SEVEN_TWO:
		return 72;
	case _SEVEN_THREE:
		return 73;
	case _SEVEN_FOUR:
		return 74;
	case _SEVEN_FIVE:
		return 75;
	case _SEVEN_SIX:
		return 76;
	case _SEVEN_SEVEN:
		return 77;
	case _SEVEN_EIGHT:
		return 78;
	case _SEVEN_NINE:
		return 79;
	case _EIGHT_ONE:
		return 81;
	case _EIGHT_TWO:
		return 82;
	case _EIGHT_THREE:
		return 83;
	case _EIGHT_FOUR:
		return 84;
	case _EIGHT_FIVE:
		return 85;
	case _EIGHT_SIX:
		return 86;
	case _EIGHT_SEVEN:
		return 87;
	case _EIGHT_EIGHT:
		return 88;
	case _EIGHT_NINE:
		return 89;

	default:
		return  999;
	}
}




/*数字の変換関数*/
int numberConversion(int a)
{
	if (a == _ONE) { return 1; }
	if (a == _TWO) { return 2; }
	if (a == _THREE) { return 3; }
	if (a == _FOUR) { return 4; }
	if (a == _FIVE) { return 5; }
	if (a == _SIX) { return 6; }
	if (a == _SEVEN) { return 7; }
	if (a == _EIGHT) { return 8; }
	if (a == _NINE) { return 9; }

	if (a == _ONE_ONE) { return 11; }
	if (a == _ONE_TWO) { return 12; }
	if (a == _ONE_THREE) { return 13; }
	if (a == _ONE_FOUR) { return 14; }
	if (a == _ONE_FIVE) { return 15; }
	if (a == _ONE_SIX) { return 16; }
	if (a == _ONE_SEVEN) { return 17; }
	if (a == _ONE_EIGHT) { return 18; }
	if (a == _ONE_NINE) { return 19; }

	if (a == _TWO_ONE) { return 21; }
	if (a == _TWO_TWO) { return 22; }
	if (a == _TWO_THREE) { return 23; }
	if (a == _TWO_FOUR) { return 24; }
	if (a == _TWO_FIVE) { return 25; }
	if (a == _TWO_SIX) { return 26; }
	if (a == _TWO_SEVEN) { return 27; }
	if (a == _TWO_EIGHT) { return 28; }
	if (a == _TWO_NINE) { return 29; }

	if (a == _THREE_ONE) { return 31; }
	if (a == _THREE_TWO) { return 32; }
	if (a == _THREE_THREE) { return 33; }
	if (a == _THREE_FOUR) { return 34; }
	if (a == _THREE_FIVE) { return 35; }
	if (a == _THREE_SIX) { return 36; }
	if (a == _THREE_SEVEN) { return 37; }
	if (a == _THREE_EIGHT) { return 38; }
	if (a == _THREE_NINE) { return 39; }

	if (a == _FOUR_ONE) { return 41; }
	if (a == _FOUR_TWO) { return 42; }
	if (a == _FOUR_THREE) { return 43; }
	if (a == _FOUR_FOUR) { return 44; }
	if (a == _FOUR_FIVE) { return 45; }
	if (a == _FOUR_SIX) { return 46; }
	if (a == _FOUR_SEVEN) { return 47; }
	if (a == _FOUR_EIGHT) { return 48; }
	if (a == _FOUR_NINE) { return 49; }

	if (a == _FIVE_ONE) { return 51; }
	if (a == _FIVE_TWO) { return 52; }
	if (a == _FIVE_THREE) { return 53; }
	if (a == _FIVE_FOUR) { return 54; }
	if (a == _FIVE_FIVE) { return 55; }
	if (a == _FIVE_SIX) { return 56; }
	if (a == _FIVE_SEVEN) { return 57; }
	if (a == _FIVE_EIGHT) { return 58; }
	if (a == _FIVE_NINE) { return 59; }

	if (a == _SIX_ONE) { return 61; }
	if (a == _SIX_TWO) { return 62; }
	if (a == _SIX_THREE) { return 63; }
	if (a == _SIX_FOUR) { return 64; }
	if (a == _SIX_FIVE) { return 65; }
	if (a == _SIX_SIX) { return 66; }
	if (a == _SIX_SEVEN) { return 67; }
	if (a == _SIX_EIGHT) { return 68; }
	if (a == _SIX_NINE) { return 69; }

	if (a == _SEVEN_ONE) { return 71; }
	if (a == _SEVEN_TWO) { return 72; }
	if (a == _SEVEN_THREE) { return 73; }
	if (a == _SEVEN_FOUR) { return 74; }
	if (a == _SEVEN_FIVE) { return 75; }
	if (a == _SEVEN_SIX) { return 76; }
	if (a == _SEVEN_SEVEN) { return 77; }
	if (a == _SEVEN_EIGHT) { return 78; }
	if (a == _SEVEN_NINE) { return 79; }

	if (a == _EIGHT_ONE) { return 81; }
	if (a == _EIGHT_TWO) { return 82; }
	if (a == _EIGHT_THREE) { return 83; }
	if (a == _EIGHT_FOUR) { return 84; }
	if (a == _EIGHT_FIVE) { return 85; }
	if (a == _EIGHT_SIX) { return 86; }
	if (a == _EIGHT_SEVEN) { return 87; }
	if (a == _EIGHT_EIGHT) { return 88; }
	if (a == _EIGHT_NINE) { return 89; }
	else { return 99; }
}