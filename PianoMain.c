#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShogiPiece.h"
#include "ShogiLogic.h"

int main(void)
{
	/* TITLE */
	titlePrint();

	komaInformation koma_info = 
	{ 
		{0,
		'y','u','g','a','o','a','g','u','y','z',
		'x','h','x','x','x','x','x','k','x','z',
		'f','f','f','f','f','f','f','f','f','z',
		'x','x','x','x','x','x','x','x','x','z',
		'x','x','x','x','x','x','x','x','x','z',
		'x','x','x','x','x','x','x','x','x','z',
		'f','f','f','f','f','f','f','f','f','z',
		'x','k','x','x','x','x','x','h','x','z',
		'y','u','g','a','o','a','g','u','y','z'
		},
		{0,
		1,2,3,4,5,6,7,8,9,10,
		11,12,13,14,15,16,17,18,19,20,
		21,22,23,24,25,26,27,28,29,30,
		31,32,33,34,35,36,37,38,39,40,
	    41,42,43,44,45,46,47,48,49,50,
	    51,52,53,54,55,56,57,58,59,60,
	    61,62,63,64,65,66,67,68,69,70,
	    71,72,73,74,75,76,77,78,79,80,
	    81,82,83,84,85,86,87,88,89,90
	    }
	};

	/* 初期設定 */
	startPrint();

	/* コンソールからの入力領域確保 */
	char* input;
	input = (char*)malloc(512 * sizeof(input));
	input = memset(input, '\0', sizeof(input));

	/* 入力された文字を分けるための領域確保 */
	/* 削除する場所 */
	char* outputIntDelete;
	outputIntDelete = (char*)malloc(10 * sizeof(outputIntDelete));
	outputIntDelete = memset(outputIntDelete, '\0', sizeof(outputIntDelete));

	/* 削除する駒 */
	char* outputCharDelete;
	outputCharDelete = (char*)malloc(10 * sizeof(outputCharDelete));
	outputCharDelete = memset(outputCharDelete, '\0', sizeof(outputCharDelete));

	/* 移動する場所 */
	char* outputIntMove;
	outputIntMove = (char*)malloc(10 * sizeof(outputIntMove));
	outputIntMove = memset(outputIntMove, '\0', sizeof(outputIntMove));

	/* 移動する駒 */
	char* outputCharMove;
	outputCharMove = (char*)malloc(10 * sizeof(outputCharMove));
	outputCharMove = memset(outputCharMove, '\0', sizeof(outputCharMove));

	/* 改行でスペースを開ける */
	spacePrint();

	while (1)
	{
		/* コンソールからの入力 */
		scanf_s("%s", input, 10);
		
		/* 改行でスペースを開ける */
		spacePrint();

		int x = 0;
		/* 77f,76fという想定 */
		for (int i = 0; 7 > i; i++)
		{
			/* inputの1文字目と2文字目 1～9なら */
			if ((i == 0) || (i == 1) && (input[i] >= '1' && input[i] <= '9'))
			{
				outputIntDelete[i] = input[i];
			}
			/* inputの3文字目 a～zなら */
			else if ((i == 2) && ((input[i] >= 'a' && input[i] <= 'z')))
			{
				outputCharDelete[0] = input[i];
			}
			/* inputの5文字目と6文字目 1～9なら */
			else if ((i == 4) || (i == 5) && (input[i] >= '1' && input[i] <= '9'))
			{
				outputIntMove[x] = input[i];
				x++;
			}
			/* inputの7文字目 a～zなら */
			else if ((i == 6) && ((input[i] >= 'a' && input[i] <= 'z')))
			{
				outputCharMove[0] = input[i];
				x = 9;
			}
		}
		if (x != 9)
		{
			break;
		}

		/* char→intに変換 */
		int IntDelete = atoi(outputIntDelete);

		/* 81マス→90マスに変換 */
		IntDelete = conv(IntDelete);

		/* char→intに変換 */
		int IntMove = atoi(outputIntMove);

		/* 81マス→90マスに変換 */
		IntMove = conv(IntMove);

     	koma_info.koma[IntMove] = outputCharMove[0];
		koma_info.koma[IntDelete] = 'x';
		
		int b = 1;
		while (b <= 90)
		{
			conv2(koma_info.koma[b]);
			b++;
		}
		//start2(IntMove, outputCharMove[0], IntDelete, 'x');
	}
	/* 改行でスペースを開ける */
	spacePrint();


	free(input);
	free(outputIntDelete);
	free(outputCharDelete);
	free(outputIntMove);
	free(outputCharMove);


	//char a = 'a';      /* char型変数aにa(97)を格納*/

	//printf("%d\n", a); 	/* 数値として97が表示される */
	//printf("%d\n", &a); /* 変数aのアドレスが表示される */
	//printf("%c\n", a);  /* １文字として「a」を表示　*/
	//printf("%p\n", a);  /* 引数をvoid * 型とみなして、そのポインタの値（アドレス値）を16進数表記で出力する。*/
	/*  printf("%s\n", a);  */ /* 領域を超えており危険(char型の変数「a」の容量は１バイト'a'も1バイトなので「\0」がないから)　*/
	/*  printf("%s\n", &a); */ /*アドレスは数値型*/



	//char* b = "abc";   /* char*型の変数bに"abc"を格納 */
	//printf("%s\n", b); /* abcが表示される */
	//printf("%p\n", *b);/* aのが表示される */
	//printf("%d\n", &b);/* 変数bのアドレスが表示される */
	//printf("%s\n", &b);
	//printf("%s\n", *b);
	//printf("%s\n", b);
	//printf("%d\n", *b);
	//printf("%d\n", b);


	//char* ip = (char*)malloc(1024 * sizeof(char));
	//ip = "asdfghjk";
	//printf("%s\n", ip); // asdfghjk
	//printf("%c\n", ip);
	//printf("%d\n", &ip);
	//ip++;
	//printf("%s\n", ip);// sdfghjk
	//ip = "n";
	//printf("%s\n", ip);// n

	/*
	d, i        intを引数として、10進数表記に変換する。
	o, u, x, X	unsigned intを引数として、符号なしの、8進数(o)、10進数(u)、16進数(x, X)、へ変換する。 xとXの違いは、16進数表記で利用するアルファベットを小文字とするか、大文字とするかの違いである。
	e, E	    doubleを引数として、指定された精度に丸めて、[-]0.000000e±00という形式に変換する。 小数点の前にある数字は必ず1桁で、±のあとの数字は最低2桁、 小数点以下の数字の桁数が精度として指定する値で、デフォルトは6となっている。 学術計算などを行わない場合はあまり見かけない記述かも知れないが、 この表記はソースコード上で浮動小数点リテラルを記述する方法の一つでもある。 eと書かれているとネイピア数（自然対数の底）を彷彿とさせるが、 1.2345e-12であれば1.2345×10−12を表現している。 eとEの違いは、Eを指定すると、eの代わりにEが用いられるという点だけだ。
	f, F	    doubleを引数として、指定された精度に丸めて、[-]0000.00という一般的に利用される小数表記に変換する。 小数点以下の桁数が精度として指定する値で、デフォルトは6になっている。
	g, G		double型を引数として、fもしくはeの形式に変換する。 変換される値の指数が、 - 4より小さいか、精度以上の場合に、e形式が使用される。 また、eやfと違い、デフォルトの精度は6であるが、小数点以下末尾にある0は省略され、 小数点以下に数字がひとつもない場合は小数点も省略される。
	a, A		double型を引数として、[-]1.000000p±00という形の16進数を使った表記に変換する。 1.8p + 0という表記であれば1.8×20という意味で、2進数で1.1、10進数で1.5を表現している。 仮数部の小数点以上の桁は0以外の時必ず1で、指数部分は10進数表記となっている。 浮動小数点数の実際のビット列表現に近い出力を得ることができる。
	c			int型を引数として、unsinged char型に変換し、対応する文字に変換する。
	s			const char* 型、文字列へのポインタを引数として、指し示す文字列を出力する。 文字列はNULL文字'\0'で終端されている必要がある。
	p    		引数をvoid * 型とみなして、そのポインタの値（アドレス値）を16進数表記で出力する。 32bit環境であれば、ポインタ値をunsigned int値にキャストして % #xに渡した場合と同じになる。 ただし、ポインタ値を整数値にキャストするのは環境依存性が高くなってしまうので、 ポインタ値を適切に出力したい場合は、この変換指定子を利用する。 この変換指定子であれば、32bit環境でも64bit環境でも、同じ記述で適切な変換を行うことができる。
	n			これまでに出力された文字数を引数のint * 型に格納する。出力としては何も行われず、入力動作になる。
	m			引数は取らず、strerror(errno)の結果に変換される。glibcの拡張仕様。
	%			引数は取らず、一つの % に変換される。
	*/
	//int ip = (char*)malloc(10 * sizeof(char));
	//ip = 999999999;
	//printf("%d\n", ip);
	// char* ip;        /* 割り振られた領域のアドレスを格納するためのint型のポインタipを宣言 */

	// int i, n;



	/* 確保する要素数を入力 */

	//printf("%d\n",ip);

	//scanf("%d", &n);



	//ip = (char*)malloc(10 * sizeof(char));  /* メモリ領域の確保 */


	/*
	for (i = 0; i < 10; i++)
	{
		ip[i] = i;
		printf("%s ", ip[i]);
	}
	*/


	//printf("\n");



	/* free(ip);  */     /* 確保したメモリ領域の解放 */













	/*文字列を先頭２文字と３文字目以降で区切る*/
	/*文字列を先頭２文字を*/
	/*numberConversion();*/
	/*で変換する*/

	/*
	printf("%s", KYOUSYA);
	printf("%s", KEIMA);
	printf("%s", GIN);
	printf("%s", KIN);
	printf("%s", GYOKU);
	printf("%s", KIN);
	printf("%s", GIN);
	printf("%s", KEIMA);
	printf("%s", KYOUSYA);
	printf("%s", "\n");

	printf("%s", SPACE);
	printf("%s", HISYA);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", KAKU);
	printf("%s", SPACE);

	printf("%s", "\n");
	printf("%s", HU);//kakeru9

	printf("%s", "\n");
	printf("%s", SPACE);//27

	printf("%s", "\n");
	printf("%s", HU);//kakeru9

	printf("%s", "\n");
	printf("%s", SPACE);
	printf("%s", KAKU);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", SPACE);
	printf("%s", HISYA);
	printf("%s", SPACE);
	printf("%s", "\n");

	printf("%s", KYOUSYA);
	printf("%s", KEIMA);
	printf("%s", GIN);
	printf("%s", KIN);
	printf("%s", GYOKU);
	printf("%s", KIN);
	printf("%s", GIN);
	printf("%s", KEIMA);
	printf("%s", KYOUSYA);
	printf("%s", "\n");
	*/

	return 0;
}