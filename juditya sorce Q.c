//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
	//q_1
	//         /*the progrem will calculat the time to arrive the distanetion in minets*/
	//
	//
	//	int road, speed;
	//
	//	printf("enter the road(in km):\n and the driving speed (in km/h):\n");
	//
	//	scanf("%d%d", &road, &speed);//calculat the road to the target
	//
	//	printf("time to get the target is %.2f mintes\n", ((float)(road / speed) * 60 / speed));
	//
	//
	//
	//	return 0;
	//
	//}

	//  //q_2
	//
	//	char foual;
	//
	//	foual = ('S', 'R', 'D', 'X');
	//
	//	float S = 7.5, R = 5.85, D = 5.95, X = 0;//the fuel pricess
	//
	//	float amount, total;
	//
	//	printf("welcom to the gaz_stayshan!.\n, thoues are the prises and type of foual:\n");// display to the customer the categores tpye of foual and the pricess
	//
	//	printf("for foual 98 natol ofart-press :S , the prize is:7.5 nis for litar-press :S\n");
	//
	//	printf("for foual 95 oktanpress:R the prize is :5.85 nis for litar-\n");
	//
	//	printf("for soular press:D , the prize is:5.95 nis for litar-\n");
	//
	//	printf("if you like to exit press: X\n");
	//
	//	scanf("%c", &foual);
	//
	//
	//
	//   　
	//
	//	switch (foual)// in any opshan the computer wile calculat the quantity multiplay by the price
	//
	//	{
	//
	//	case 'S':
	//
	//		printf("how meny liters do you need?\n");
	//
	//		scanf("%f", &amount);
	//
	//		printf("you have to pay %.2f :\n", total = ((S)*amount));
	//
	//		break;
	//
	//	case 'R':
	//
	//		printf("how meny liters do you need?\n");
	//
	//		scanf("%f", &amount);
	//
	//		printf("you have to pay %.2f :\n", total = ((R)*amount));
	//
	//		break;
	//
	//	case 'D':
	//
	//		printf("how meny liters do you need?\n");
	//
	//		scanf("%f", &amount);
	//
	//		printf("you have to pay %.2f :\n", total = ((D)*amount));
	//
	//		break;
	//
	//	case 'X':
	//
	//		printf("bye bye!!.\n");
	//
	//	}
	//
	//	if (total > 150)
	//
	//	printf("you gat a free Newspaper!!\n",total);
	//
	//	return 0;
	//
	//	}
	//
	//}

	////q_3



	{

		// this task the user need to choose integer number the maximun digit is 4.
/*
		int num1, option, sum;

		printf("Please choose a integer number the maximun digit is 4:\n");

		scanf("%d", &num1);

		int num = 0;

		while (num1 <= 9999 && num1 >= -9999){

			printf("Please choose what to do:\n");
				printf("1.Clculate how many digit you choose\n");
				printf("2.Cheak if the number is odd or double.\n");
				printf("3.If the number you choose negative we upload squared.\n");

			scanf("%d", &option);

			if (option == 3)
			{
				sum = num1*num1;

				printf("%d\n", sum);

			}

			if (option == 2){

				for (int num1 = 1; num1 <= 9999 && num1 >= -9999; num1++);

				if (num1 % 2 == 0){

					printf("The number you choose is double/\n");

				}

				else

					printf("The number you choose is odd.\n");

			}
			if (option == 1){

				if (num1 < 9 && num1 >0 || num1 <-9 && num <0){

					printf("The number you choose consist 1 digit\n");
				}

				if (num1 < 99 && num1 >10 || num1 <-99 && num <-10){

					printf("The number you choose consist 2 digit\n");

				}

				if (num1 < 999 && num1 >100 || num1 <-999 && num <-100){

					printf("The number you choose consist 3 digit\n");

				}

				if (num1 < 9999 && num1 >1000 || num1 <-9999 && num <-1000){

					printf("The number you choose consist 4 digit\n");

				}

			}

			if (option != 1 && option != 2 && option != 3){

				printf("Please choose what to do:\n1.Clculate how many digit you choose\n");
				printf("2.Cheak if the number is odd or double.\n");
				printf("3.If the number you choose negative we upload squared.\n");

			}

		}

		return 0;
*/
	//Q_4
	/*the user has to enter number by 5 digit*/

	//	int num1;
	//
	//	printf("enter integer number by 5 digit\n");
	//
	//	scanf("%d", &num1);
	//
	//	if (num1 >= 10000 && num1 <= 99999)//lumuted only 5 digit
	//
	//	{
	//
	//		if ((num1 % 10 && (num1 / 10000) % 10 && (num1 / 10) % 10 && (num1 / 1000) % 10) != 0)//the 5 digit is not a siro.
	//
	//			printf("rong number triy agan.\n");
	//
	//		else if (num1 % 10 == (num1 / 10000) % 10 && (num1 / 10) % 10 == (num1 / 1000) % 10)//chake if ahadot=asrot alafim
	//
	//			//and asarot=alafim
	//
	//			printf("the number is polindrom.\n");// enser if is coract or not.
	//
	//	}
	//
	//	else
	//
	//		printf("the number is not a polindrom.\n");
	//
	//	return 0;
	//
	//}

	//	//q_5
	//	long num1, num2, sum1 = 0, sum2 = 0;
	//
	//	printf("enter 2 integar numberes that contain 3 digite\n");
	//
	//	scanf("%d%d", &num1, &num2);
	//
	//	if (num1 > 99 && num1 <= 999)
	//
	//	{
	//
	//		if (num1 % 10 == 5)
	//
	//			sum1++;
	//
	//		if (num1 / 10 % 10 == 5)
	//
	//			sum1++;
	//
	//		if (num1 / 100 % 10 == 5)
	//
	//			sum1++;
	//
	//	}
	//
	//	if (num2 > 99 && num2 <= 999)
	//
	//	{
	//		if (num2 % 10 == 5)
	//			sum2++;
	//		if (num2 / 10 % 10 == 5)
	//			sum2++;
	//		if (num2 / 100 % 10 == 5)
	//			sum2++;
	//	}
	//
	//	if (sum1 != 0 || sum2 != 0)// if one of the digit is siro 
	//
	//	{
	//		if (sum1 > sum2)
	//			printf("the first number is the winner.\n");
	//		if (sum1 < sum2)
	//			printf("the secen number is the winner.\n");
	//		else if (num1 != 5 && num2 != 5)
	//			printf("shave!.\n");
	//	}
	//	else
	//
	//		printf("the number 5 us not exsist.\n");
	//	return 0;
	//
	//}
	//q_6
	//
	////6.1
	//
	//	int num1 = 1, num2 = 1;
	//
	//	while (num1 <= 10)
	//
	//	{
	//
	//		while (num2 <= 10)
	//
	//		{
	//
	//			printf("%4d", num1*num2);
	//
	//			num2++;
	//
	//		}
	//		num2 = 1;
	//
	//		printf("\n");
	//
	//		num1++;
	//
	//	}
	////6.2
	//
	//	int num1, num2;
	//
	//	for (num1 = 1; num1 <= 10; num1++)
	//
	//	{
	//
	//		for (num2 = 1; num2 <= 10; num2++)
	//
	//			printf("%4d", num1*num2);
	//
	//		printf("\n");
	//
	//	}
	//	//6.3
	//	int num1 = 1, num2 = 1;
	//
	//	do
	//	{
	//
	//		do
	//		{
	//			printf("%4d", num1*num2);
	//
	//			num2++;
	//
	//		} while (num2 <= 10);
	//
	//		num2 = 1;
	//
	//		printf("\n");
	//
	//		num1++;
	//
	//	} while (num1 <= 10);
	//	return 0;
	//
	//}
	//
	//q_7

	//int  num1 = 0, i = 0, ahadot = 0, asarot = 0, meot = 0;
	//printf("enther 3 integar number that include 3 digit\n");
	//scanf("%d", &num1);
	//if (num1 > 99 && num1 <= 999)
	//{
	//	for (i = 1; i < 30; i++)
	//	{
	//		printf("enther integar number that include 3 digit\n");

	//		scanf("%d", &num1);

	//		ahadot += num1 % 10;

	//		asarot += (num1 / 10) % 10;

	//		meot += (num1 / 100) % 10;

	//	}

	//	if (i = 30)

	//	{

	//		if (asarot > ahadot&&ahadot > meot)
	//			printf(" the bigest %d > %d > %d the smallast\n", asarot, ahadot, meot);
	//		if (ahadot > meot&&meot > asarot)
	//			printf("the bigest%d > %d > %d the smallast\n", ahadot, meot, asarot);
	//		if (meot > asarot&&asarot > ahadot)
	//			printf("the bigest:  %d > %d > %d the smallast\n", meot, asarot, ahadot);
	//		if (ahadot > asarot&&asarot == meot)
	//			printf("the biger caunter is ahadot\n%d >(%d=%d)\nasarot=meot\n", ahadot, asarot, meot);
	//		if (ahadot == asarot&&asarot < meot)
	//			printf("the biger caunter is meot %d>(%d=%d)\nasarot=ahadot\n", meot, asarot, ahadot);
	//		if (asarot>meot&&meot == ahadot)
	//			printf("the biger caunter is asarot\n%d>(%d=%d)\nmeot=ahadot\n", asarot, meot, ahadot);
	//	}
	//}
	//Q_8
	//
	//	unsigned int num1, num2;
	//
	//	printf("enter an 2 integer number one whith 5 digit and one whith 1 digit.\n");
	//
	//	scanf("%u %u", &num1, &num2);
	//
	//	if (num1 >= 10000 && num1 <= 99999 && num2 > 0 && num2 < 9)
	//
	//	{
	//
	//		if ((num1 / 10000) % 10 != num2)
	//
	//			printf("%u", (num1 / 10000) % 10);
	//
	//		if ((num1 / 1000) % 10 != num2)
	//
	//			printf("%u", (num1 / 1000) % 10);
	//
	//		if ((num1 / 100) % 10 != num2)
	//
	//			printf("%u", (num1 / 100) % 10);
	//
	//		if ((num1 / 10) % 10 != num2)
	//
	//			printf("%u", (num1 / 10) % 10);
	//
	//		if (num1 % 10 != num2)
	//
	//			printf("%u\n", num1 % 10);
	//
	//	}
	//
	//	else
	//
	//		printf("one of the the number you entherd is not in the limit,try agein.\n");
	//
	//	return 0;
	//
	//}

	//	//q_8B
	//
	//	unsigned int num1, num2;
	//
	//	do
	//
	//	{
	//
	//		printf("enter 2 integer number one withe 5 digit and the ather withe one digit\n");
	//
	//		scanf("%u%u", &num1, &num2);
	//
	//		if (num1 >= 10000 && num1 <= 99999 && num2 > 0 && num2 < 9)
	//
	//		{
	//
	//			if (num1 / 10000 % 10 != num2)
	//
	//				printf("%u", (num1 / 10000 % 10));
	//
	//			if (num1 / 1000 % 10 != num2)
	//
	//				printf("%u", (num1 / 1000 % 10));
	//
	//			if (num1 / 100 % 10 != num2)
	//
	//				printf("%u", (num1 / 100 % 10));
	//
	//			if (num1 / 10 % 10 != num2)
	//
	//				printf("%u", (num1 / 10 % 10));
	//
	//			if (num1 % 10 != num2)
	//
	//				printf("%u\n", num1 % 10);
	//
	//		}
	//
	//		else
	//
	//			printf("one of the the number you entherd is not in the limit,try agein.\n");
	//
	//	} while ((num1 != 0 && num2 != 0));
	//
	//	return 0;
	//
	//}
	//
	// 
	//q_9

	//q_ 9a
	//
	//	unsigned int num, sum = 0, i = 0;
	//
	//	printf("enter integer number.\n");
	//
	//	scanf("%d", &num);
	//
	//	sum = 0;
	//
	//	for (i = 1; i < num; i++)
	//
	//	{
	//		if ((num % i == 0))
	//			sum += i;
	//	}
	//
	//	if (sum == num)
	//		printf("the number %d is meshuclal.\n", num);
	//	else
	//		printf("the number %d is not meshuclal.\n", num);
	//	return 0;
	//}

	//	//q_ 9 b
	//
	//	unsigned int mis, sum = 0, i = 0;
	//
	//	for (mis = 1; mis <= 10000; mis++)
	//
	//	{
	//
	//		sum = 0;
	//
	//		for (i = 1; i < mis; i++)
	//
	//		{
	//
	//			if (mis%i == 0)
	//
	//				sum += i;
	//
	//		}
	//
	//		if (sum == mis)
	//
	//			printf("the number is%u.\n", mis);
	//
	//	}
	//
	//}

	//	int num, i = 1, max, min, j;
	//
	//	float avrege = 0;
	//
	//	printf("enter integer number.\n");
	//
	//	scanf_s("%d", &num);
	//
	//	min = num;
	//
	//	max = num;
	//
	//	avrege += num;
	//
	//	for (i = 0; i <= 20; i++)
	//
	//	{
	//		if ((num % 1 == 0) && (num % 3 == 0) && (num % 5 == 0))
	//
	//			j = 0;
	//
	//		while (j <= num)
	//
	//		{
	//			if ((j % 1 == 0) && (j % 3 == 0) && (j % 5 == 0))
	//
	//				printf("the number is divided by %d.\n", j);
	//
	//			j++;
	//
	//		}
	//
	//		printf("enter integer number.\n");
	//
	//		scanf_s("%d", &num);

	//		if (min > num)
	//			min = num;
	//		if (max < num)
	//
	//			max = num;
	//
	//		avrege += num;
	//
	//	}
	//
	//	printf("the small number is %d.\n", min);
	//
	//	printf(" the bigest number is %d.\n", max);
	//
	//	printf(" the avrag %.2f.\n", avrege / 20);
	//
	//	return 0;
	//
	//}


// q/10

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//
//{
//
//	int num, i = 1, max, min, sum = 0, j;
//
//	float avrege = 0;
//
//
//
//
//
//
//
//
//
//	printf("enter integer number.\n");
//
//	scanf_s("%d", &num);
//
//	min = num;
//
//	max = num;
//
//	avrege += num;
//
//	sum += num;
//
//
//
//	for (i = 0; i <= 20; i++)
//
//	{
//
//
//
//		if ((num % 1 == 0) && (num % 3 == 0) && (num % 5 == 0))
//
//			j = 0;
//
//		while (j <= num)
//
//		{
//
//			if ((j % 1 == 0) && (j % 3 == 0) && (j % 5 == 0))
//
//				printf("the number is divided by %d.\n", j);
//
//			j++;
//
//		}
//
//		printf("enter integer number.\n");
//
//		scanf_s("%d", &num);
//
//
//
//		if (min > num)
//
//			min = num;
//
//
//
//		if (max < num)
//
//			max = num;
//
//		avrege += num;
//
//
//
//	}
//
//
//
//	printf("the small number is %d.\n", min);
//
//	printf(" the bigest number is %d.\n", max);
//
//	printf(" the avrag %.2f.\n", avrege / 20);
//
//
//
//
//
//	return 0;
//
//}




