// name: yehudith yaacov id:016003659 campuse: beer-sheva//work_4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function_1*//
int *symmetricDiff(int *A, int sizeA, int *B, int sizeB, int *pNewSize)/*Section 1//function_1*/
{
	int i, k = 0, j, *arr = NULL, cunter = 0;
	arr = (int*)malloc((sizeA + sizeB)*sizeof(int));//array memory alo
	for (i = 0; i < sizeA; i++)
	{
		j = 0;
		while (B[j] != A[i] && j < sizeB)
		{
			if (A[i] != B[j])
			{
				j++;
			}
		}
		if (sizeB == j)
		{
			cunter++;
			arr[k] = A[i];
			k++;
		}
	}
	for (j = 0; j < sizeB; j++)
	{
		i = 0;
		while (B[i] != A[j] && i < sizeA)
		{
			if (A[j] != B[i])
			{
				i++;
			}
		}
		if (sizeA == i)
		{
			cunter++;
			arr[k] = B[j];
			k++;
		}
	}

	(*pNewSize) = cunter;
	arr = (int*)realloc(arr, *pNewSize * sizeof(int));
	return arr;
}
//function_2*/
int isEquivalent(char*lines[], int length, char* text)// function_2*//
{
	int i = 0, size = 0, j = 0;
	char *newstr = NULL;
	newstr = (char**)realloc(newstr, 1 * sizeof(char)); //This is for creating the string //
	if (!newstr)
	{
		printf("ERROR !out of memory\n");
		exit(1);
	}
	newstr[i] = NULL;
	for (i = 0; i < length; i++)//This loop and the function "strcat" are for creating a concatenation from the array of strings "lines"//
	{
		{
			strcat(newstr, lines[i]);
		}
		if (strcmp(text, newstr) == 0)	//The function checking if in the array of strings "lines" and the string "text" includes the same chars//
		{

			return 1;
		}
		else
		{
			return 0;
		}
	}
}
// function_3*//
void split(int n, int *pSmallDigits, int *pBigDigits)
{
	int temp = 0, flag = 1, flag1 = 1;
	*pSmallDigits = NULL;
	*pBigDigits = NULL;
	while (n != 0)// loop a are for chaecking each digit in the varible number//
	{
		temp = n % 10;
		if (temp < 5)
		{
			*pSmallDigits = temp*flag + *pSmallDigits;// creating pSmallDigits by adding the numbers.
			flag *= 10;
		}
		else if (temp >= 5){
			*pBigDigits = temp*flag1 + *pBigDigits;// creating pBigDigits by adding the numbers.
			flag1 = flag1 * 10;
		}
		n /= 10;
	}
}


int main()
{
	//Section 1// 
	int i = 0, j = 0, length = 0, res = 0, size = 1, option = 0, restart = 0;
	char **lines = NULL, tav = 0, *text = NULL, Ch = 0;
	int *pNewSize = NULL, sizeA = 0, sizeB = 0, *A = NULL, *B = NULL, *arr = NULL;
	int counter = 0, n = 0, *pSmallDigits = NULL, *pBigDigits = NULL;
	do
	{
		printf("please choose one of the following option ;\n");
		printf("for cheking symmetric differenc of an array numberspress 1;\n");
		printf("for compare chars between the array of strings and whith on string( witch do not appear) press 2;\n");
		printf("to split the n Digits in number into two groups and\n reassemble to one number in any groups press(SmallDigits or BigDigits) press 3;\n");
		printf("for exit press 0! ;\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("enter the sizeA of the array:\n");
			scanf("%d", &sizeA);
			A = (int*)malloc(sizeA*sizeof(int));
			if (!A)
				printf("ERROR !out of memory\n");
			for (i = 0; i < sizeA; i++)
			{
				printf("enter[ %d] numbers in the arrayA:\n", i);
				scanf("%d", &A[i]);
			}
			printf("enter the sizeB of the array:\n");
			scanf("%d", &sizeB);
			B = (int*)malloc(sizeB*sizeof(int));

			if (!B)
				printf("ERROR !out of memory\n");
			for (j = 0; j < sizeB; j++)
			{
				printf("enter [%d] numbers in the arrayB:\n", j);
				scanf("%d", &B[j]);
			}
			arr = symmetricDiff(A, sizeA, B, sizeB, &pNewSize);
			for (i = 0; i < pNewSize; i++)
			{
				printf("%d", arr[i]);
				printf("\t");

			}
			printf("\n");
			free(arr);
			break;
			///*Section2//
		case 2:
			printf("Please enter the size of the array of strings(how many words in the lines)\n");
			scanf("%d", &length);
			_flushall();
			lines = (char**)malloc(length * sizeof(char*)); //The function malloc is for creating the array of strings "lines"//
			if (!lines)

			{
				printf("ERROR !out of memory\n");
				exit(1);
			}
			for (i = 0; i < length; i++)//This loop is for scaning the array of strings "lines"//
			{
				j = 0;
				printf("Please enter chars to the %d string\n", i + 1);
				lines[i] = (char*)malloc(1 * sizeof(char));
				scanf("%c", &Ch);
				Ch = 0;
				while (Ch != '\n')

				{
					lines[i] = (char*)realloc(lines[i], size++);//dynamic memory size forthe strings //
					if (!lines[i])

					{
						printf("ERROR !out of memory\n");
						exit(1);
					}
					lines[i][j] = Ch;
					scanf("%c", &Ch);
					j++;
				}
				lines[i][j] = '\0';
				size = 1;
			}
			size = 1;
			i = 0;
			text = (char*)malloc(1 * sizeof(char)); //This is for creating the string "text"//
			printf("Now,Please enter series chars to the string text:\n");
			scanf("%c", &tav);
			while (tav != '\n')
			{
				text = (char *)realloc(text, size++);//dynamic memory size forthe strings "text"+1//
				text[i] = tav;
				scanf("%c", &tav);
				i++;
			}
			text[i] = '\0';

			system('cls');
			res = isEquivalent(lines, length, text); //calling for function 2//
			printf("%d\n", res);
				break;
			//*Section3//
		case 3:
			printf("ente a size of N entger pozetiv numbers.\n ");
			scanf("%d", &n);
			split(n, &pSmallDigits, &pBigDigits);//calling the function.
			printf("pSmallDigits= %d\n pBigDigits= %d\n", pSmallDigits, pBigDigits);
			free(split);
			break;
			printf("press any number to contcontinue:\n");
		}

	} while (option != 0);
	printf(" BYE BYE !\n");

	return 0;

}





