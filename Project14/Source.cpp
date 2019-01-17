#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

void task1()
{
	int M[20];
	for (size_t i = 0; i < 20; i++)
	{
		M[i]= 1 + rand() % 20;
		printf("Элементы массива:%d\n", M[i]);
	}
}

void task2()
{
	int M[20];
	for (size_t i = 0; i < 20; i++)
	{
		M[i] = 50 + rand() % 50;
		printf("Значение веса:%d\n", M[i]);
	}
}

void task3()
{
	const int n = 18;
	int A[n] = {0};
	int x,j;
	for (size_t i = 1; i < n; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("Элементы массива:%d\n", A[i]);
	}

	size_t i = 1;
	for (; i < n-1; i++)
	{
		for (size_t j = n-2; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				x = A[j];
				A[j] = A[j + 1];
				A[j + 1] = x;
			}
		}
	}

	printf("\n");
	for (size_t i = 1; i < n; i++)
	{
		printf("%d, ", A[i]);
	}

	printf("\n");
} 

void task4()
{
	int A[8];
	for (size_t i = 0; i < 8; i++)
	{
		A[i] = -5 + rand() % 10;
		printf("Элементы массива:%d\n", A[i]);
		
	}
	if (A[3] > 0)
	{
		printf("A[3]- положительное число\n");
	}
	else
	{
		printf("A[3]-отрицательное число\n");
	}
	if (A[5] % 2 == 0)
	{
		printf("A[5]-четное число");
	}
	else if (A[5] % 2 > 0)
	{
		printf("A[5]-нечетное число\n");
	}
	if (A[3] > A[5])
	{
		printf("A[3] больше A[5]");
	}
	else if (A[5] > A[3])
	{
		printf("A[5] больше A[3]");
	}
}

void task5()
{
	int A[8] = { 0 };
	int a, d, c;
	for (size_t i = 0; i < 8; i++)
	{
		A[i] = 5 + rand() % 10;
		printf("Элементы массива:%d\n", A[i]);
	}
	for (size_t i = 0; i < 8; i++)
	{
		a= A[i] - 20;
		printf("После действий:%d\n", a);
	}
	for (size_t i = 0; i < 8; i++)
	{
		d = A[i] * A[8];
		printf("После умножения:%d\n", d);
	}
	for (size_t i = 0; i < 8; i++)
	{
		c = A[i] - 12;
	  printf("После изменения:%d\n", c);
	}
}

void task6()
{
	int A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = -5 + rand() % 10;
		printf("Элементы массива:%d\n", A[i]);
	}
	for (size_t i = 0; i < 12; i++)
	{
		if (A[i]>0)
		{
			printf("Массив:%d\n", A[i]);
		}
	}
	for (size_t i = 0; i < 12; i++)
	{
		if (A[i]<0)
		{
			printf("Массив:%d\n", A[i]);
		}
	}
}

void task7()
{
	int A[21] = { 1 };
	int k = 0;
	for (size_t i = 1; i < 21; i++)
	{
		A[i] = 1 + rand() % 7;
		printf("Количество побед футбольной команды номер %d :%d\n",i, A[i]);
	}
	for (size_t i = 1; i < 21; i++)
	{
		if (A[i]<3)
		{
			k = k + 1;
		}
	}
	printf("Количество команд:%d\n", k);
}

void task8()
{
	int A[14] = { 0 };
	int k = 0;
	for (size_t i = 0; i < 14; i++)
	{
		A[i] = 1 + rand() % 7;
		printf("Элементы массива:%d\n", A[i]);
	}
	for (size_t i = 0; i < 14; i++)
	{
		if (A[i] %2 == 0)
		{
			k = k + 1;
			
		}
		
	}
	printf("Количество :%d\n", k);
}

void task9()
{
	int A[12] = { 0 };
	int sum = 0;
	float sr;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 7;
		printf("Элементы массива номер %d:%d\n",i, A[i]);
	}
	for (size_t i = 0; i < 12; i++)
	{
		sum = sum + A[i];
		
	}
	sr = (float)sum / 12;
	printf("Среднее:%f\n", sr);
	for (size_t i = 0; i < 12; i++)
	{
		A[5] = sr;
		printf("Массив номер %d:%d\n",i, A[i]);
	}
}
void task10()
{
	int A[15] = { 0 };
	int k = 0;
	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 1 + rand() % 20;
		printf("Элементы массива номер %d:%d\n", i, A[i]);
	}
	for (size_t i = 0; i < 15; i++)
	{
		if (A[i]>A[1])
		{
			k = k + 1;
		}
	}
	printf("Количество:%d\n", k);
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("Введите номер задачи: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
	    case 7:
		{
			task7();
		}
		break;
	    case 8:
		{
			task8();
		}
		break;
		case 9:
		{
			task9();
		}
		break;
		case 10:
		{
			task10();
		}
		break;
		default:
			break;
		}

		printf("Хотите продолжить?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}