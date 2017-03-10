#include "polischukoa.h"

/**
 * ����� ������
 */
void polischukoa::lab1()
{
	double � = 0;
	double *X = new double[n];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            � = A[j][i] / A[i][i];

            for (int k = i; k < n; k++)
            {
                A[j][k] -= � * A[i][k];
            }
            B[j] -= � * B[i];
        }
    }
	  
    for(int i = 0; i < n; i++)
	{
        X[i] = B[i];
	}
	
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
		{
			X[i] -= A[i][j] * X[j];
		}

        X[i] /= A[i][i];
	}

	for(int i = 0; i < n; i++)
	{
        cout << X[i] << "	";
	}

}


/**
 * ����� ������ � ������� �������� ��������
 */
void polischukoa::lab2()
{
	double � = 0;
	double *X = new double[n];
	int max;

    for (int i = 0; i < n - 1; i++)
    {
		max = i;

		for (int j = i + 1; j < n; j++)
		{
			if(abs(A[j][i]) > abs(A[max][i]))
			{
				max = j;
			}
		}
        
		swap(A[max], A[i]);
        swap(B[max], B[i]);


        for (int j = i + 1; j < n; j++)
        {
            � = A[j][i] / A[i][i];
            for (int k = i; k < n; k++)
            {
                A[j][k] -= � * A[i][k];
            }
            B[j] -= � * B[i];
        }
    }
	  
    for(int i = 0; i < n; i++)
	{
        X[i] = B[i];
	}
	
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
		{
			X[i] -= A[i][j] * X[j];
		}

        X[i] /= A[i][i];
	}

	for(int i = 0; i < n; i++)
	{
        cout << X[i] << "	";
	}	
}



/**
 * ����� ����������� ����� (����� ���������)
 */
void polischukoa::lab3()
{

}



/**
 * ����� ��������
 */
void polischukoa::lab4()
{

}



/**
 * ����� �����
 */
void polischukoa::lab5()
{

}



/**
 * ����� �������
 */
void polischukoa::lab6()
{

}



/**
 * ���� �� ����������� �������
 */
void polischukoa::lab7()
{

}
