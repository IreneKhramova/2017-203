#include "ivanovii.h"

/**
 * ����� ������
 */
void klyushenkovaa::lab1()
{
for(int i=0;i<n;i++)
        {
            koif=a[i][i];
            for(int l=i;l<n;l++)
            {
                a[i][l]=a[i][l]/koif;
            }
            b[i]=b[i]/koif;
            for(int j=i+1;j<n;j++)
            {
                koif=a[j][i];
                for(int k=i;k<n;k++)
                {
                    a[j][k]=a[j][k]-a[i][k]*koif;
                }
                b[j]=b[j]-b[i]*koif;
            }
        }
    x[n-1]=b[n-1];
    x[n-2]=b[n-2] - a[n-2][n-1]*x[n-1];
    for(int i=n-3;i>=0;i--)
    {
        double sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=a[i][j]*x[i];
        }
        x[i]=(b[i]-sum)/a[i][i];
    }

}


/**
 * ����� ������ � ������� �������� ��������
 */
void klyushenkovaa::lab2()
{

}



/**
 * ����� ����������� ����� (����� ���������)
 */
void klyushenkovaa::lab3()
{

}



/**
 * ����� ��������
 */
void klyushenkovaa::lab4()
{

}



/**
 * ����� �����
 */
void klyushenkovaa::lab5()
{

}



/**
 * ����� �������
 */
void klyushenkovaa::lab6()
{

}



/**
 * ���� �� ����������� �������
 */
void klyushenkovaa::lab7()
{

}
