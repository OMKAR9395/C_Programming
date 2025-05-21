#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Elements(int[], int);
void Display_All_Elements(int[], int);

int Search_Element(int[], int, int);
int Count_Of_Element(int[], int, int);

int Even_Elements_Count(int[], int);
int Odd_Elements_Count(int[], int);
int Zero_Elements_Count(int[], int);

int Sum_Of_All_Elements(int[], int);

int Find_Min_Element(int[], int);
int Find_Max_Element(int[], int);

void Accept_Elements(int iNum[], int Size)
{
	int  i = 0;

	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Value for Element Number %d = ", i+1);
		scanf("%d", &iNum[i]);
	}

	return;
}

void Display_All_Elements(int iNum[], int Size)
{
	int  i = 0;

	for(i = 0; i < Size; i++)
	{
		printf("\n Value of %d Element = %d .",i+1, iNum[i]);
	}

	return;
}

int Search_Element(int iNum[], int Size, int Ele)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
		if(Ele == iNum[i])
		{
			break;
		}
    }

    if(Size == i)
    {
        i = -1;
    }

    return  i;
}

int Count_Of_Element(int iNum[], int Size, int Ele)
{
    int i = 0, Cnt = 0;

    for(i = 0; i < Size; i++)
    {
		if(Ele == iNum[i])
		{
			Cnt++;
		}
    }

    return  Cnt;
}

int Even_Elements_Count(int iNum[], int Size)
{
    int i = 0, eCnt = 0;

    for(i = 0; i < Size; i++)
    {
		if( iNum[i] % 2 == 0 && iNum[i] != 0 )
		{
			eCnt++;
		}
    }

    return eCnt;
}

int Odd_Elements_Count(int iNum[], int Size)
{
    int i = 0, oCnt = 0;

    for(i = 0; i < Size; i++)
    {
		if( iNum[i] % 2 == 1 )
		{
			oCnt++;
		}
    }

    return oCnt;
}

int Zero_Elements_Count(int iNum[], int Size)
{
    int i = 0, zCnt = 0;

    for(i = 0; i < Size; i++)
    {
		if(0 == iNum[i])
		{
			zCnt++;
		}
    }

    return zCnt;
}

int Sum_Of_All_Elements(int iNum[], int Size)
{
    int i = 0, Sum = 0;

    for(i = 0; i < Size; i++)
    {
		Sum = Sum + iNum[i];
    }

    return Sum;
}

int Find_Min_Element(int iNum[], int Size)
{
	int  i = 0, Min = 0;

	for(i = 0; i < Size; i++)
	{
		if(i == 0)
		{
			Min = iNum[i];
			continue;
		}

		if( iNum[i] < Min )
		{
			Min = iNum[i];
		}
	}

	return Min;
}

int Find_Max_Element(int iNum[], int Size)
{
	int  i = 0, Max = 0;

	for(i = 0; i < Size; i++)
	{
		if(i == 0)
		{
			Max = iNum[i];
			continue;
		}

		if( iNum[i] > Max )
		{
			Max = iNum[i];
		}
	}

	return Max;
}
