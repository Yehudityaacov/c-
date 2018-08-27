// name: yehudith yaacov id:016003659 campuse: beer-sheva//work_2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long min_num(int length)
{
	int i, salution = 1;//i is the conter of the amunt of digit in the num
	for (i = 1; i < length; i++)
	{
		if (length == 1)//chaking for the smooest amunt of digit
		{
			salution = salution * 1;//function retorn the minimom num
		}
		//reantreing the value
		if (length > 1)//starting the loop for number thath grithar then 1
			salution = salution * 10;//function calculat the minimom number
	}
	return salution;//eixscut the risult =smulast number
}
int contain(long num, int digit, int should_contain)
{
	int counter = 0;
	if (digit >= 0 && digit <= 9)
		while (num != 0)
		{
			if (num % 10 == digit)//start to comparing if the every number of the number is equal to the digit
			{
				counter = 1;//if is equal then the counter is 1
			}
			num /= 10;//cat the last number antil the holl nuber is comperd to the digit
		}
		if (should_contain == 1 && counter == 1)
			return 1;
		else if (should_contain == 0 && counter != 1)
			return 1;
		else
			return 0;
}
int mod_a(long num, int dnum, int result, int should_be)
{
	if (should_be == 1 && (num%dnum == result))//if the the number divid and have a sharit
		return 1;
	else if (should_be == 0 && (num%dnum != result))
		return 1;
	else
		return 0;
}

int main()

{
	long int num = 0, length;
	int dnum, result, digit, should_contain = 0, should_be = 0, counter = 0, rectangle = 0, i = 0, j = 0, count = 0, tmp = 0;
	char tamp, chack;
	do
	{
		printf("Enter number of digits. (between 1-9):");
		scanf("%d", &length);
		printf("\n");
	} while (length < 1 || length>9);//rong number reanther anther number
	do
	{
		printf("Enter a digit(between 0-9):");
		scanf("%d", &digit);
		printf("\n");
	} while (digit<0 || digit>9); //not in the limit digit reantherin
	do
	{
		printf("Do you want numbers which contain %d?(y/n)", digit);//in order to chake the holl number which contin the number thet the user whant
		flushall();
		scanf("%c", &tamp);
		printf("\n");
		getchar();
		switch (tamp)//the holl case the user culde chose.
		{
		case 'y':
			should_contain = 1;
			break;
		case 'Y':
			should_contain = 1;
			break;
		case 'n':
			should_contain = 0;
			break;
		case 'N':
			should_contain = 0;
			break;
		default:printf(" wrong char try again,");//if the user entered id nout in any of the case
			break;
		}
	} while (tamp != 'y' && tamp != 'Y' &&tamp != 'n' && tamp != 'N');//going to the loop antile is the corect choose.
	printf("Enter dnum:");
	scanf("%d", &dnum);
	printf("\n");
	printf("Enter result:");
	scanf("%d", &result);
	printf("\n");
	do
	{
		printf("Do you want: (num/%d=%d)? (y/n)", dnum, result);//the user need to anter y/n
		flushall();
		scanf("%c", &chack);
		printf("\n");
		getchar();
		switch (chack)
		{
		case 'y':
			should_be = 1;
			break;
		case 'Y':
			should_be = 1;
			break;
		case 'n':
			should_be = 0;
			break;
		case 'N':
			should_be = 0;
			break;
		default:printf(" wrong char try again,");//if the user entered id nout in any of the case
			break;
		}
	} while (chack != 'y' && chack != 'Y' && chack != 'n' && chack != 'N');
	do
	{
		printf("Enter width of rectangle: (between 11-19)\n");
		scanf("%d", &rectangle);
		printf("\n");
		if (rectangle < 11 || rectangle > 19)
			printf("wrong rectangle,try agan,");
	} while (rectangle < 11 || rectangle > 19);
	num = min_num(length);//coling the function
	while (num < min_num(length) * 10)//stert chaking the holl nuber thet has the condition thet the user enterd
	{
		if (contain(num, digit, should_contain) == 1 && mod_a(num, dnum, result, should_be) == 1)
		{
			printf("%5.3ld", num);
			counter++;//countig the amuont of number thet has the conditin
		}
		num++;//the number rize antil the last number= the amunt of the result from the function *10
	}
	printf("\n");
	printf(" The number of numbers with %d digits, which contain the digit %d, and modulo %d are equal to %d is:%d\n", length, digit, dnum, result, counter);
	count = counter;
	while (count != 0)
	{
		count = count / 10;
		tmp++;//the amuont of spase thet need to be give to print the number 
	}
	if (count == 0)// if the number of digit is 1 then the lengthe wile be 0
		tmp++; //one place to the digit 0 whith out moving the holl colm
	for (i = 1; i <= 5; i++)// counting the colm
	{
		for (j = 1; j <= rectangle; j++) //  counting the row
		{
			if (i == 3)
			{
				if (j == (rectangle -tmp)/ 2) //give place to the  counter in the  the center
				{
					printf("%d", counter);//printing the number in the middle
					j = j + tmp;// moning aside the rast of the line need to be cat for the rectangle
				}
			}
			printf("_");//print this if not in the middle
		}
		printf("\n");
	}
	return 0;
}

