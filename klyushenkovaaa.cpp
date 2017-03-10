#include "klyushenkovaaa.h"

/**
 * ����� ������
 */
void klyushenkovaa::lab1()
{
double kof;
for(int i=0;i<N;i++)
        {
            kof=A[i][i];
            for(int l=i;l<N;l++)
            {
                A[i][l]=A[i][l]/kof;
            }
            b[i]=b[i]/kof;
            for(int j=i+1;j<N;j++)
            {
                kof=A[j][i];
                for(int k=i;k<N;k++)
                {
                    A[j][k]=A[j][k]-A[i][k]*kof;
                }
                b[j]=b[j]-b[i]*kof;
            }
        }
    x[N-1]=b[N-1];
    x[N-2]=b[N-2] - A[N-2][N-1]*x[N-1];
    for(int i=N-3;i>=0;i--)
    {
        double sum=0;
        for(int j=i+1;j<N;j++)
        {
            sum+=A[i][j]*x[i];
        }
        x[i]=(b[i]-sum)/A[i][i];
    }

}


/**
 * ����� ������ � ������� �������� ��������
 */
void klyushenkovaa::lab2()
{
double kof;
    for(int i=0;i<N;i++)
    {


        int ind=i;
        double m_el=abs(A[i][i]);
        for(int q=q+1;q<N;q++)
        {

            if( abs(A[q][i])>m_el )
            {
                m_el=abs(A[q][i]);
                ind=q;
            }
        }
        for(int index=0;index<N;index++)
        {
            std::swap(A[i][index],A[ind][index]);
        }

            kof=A[i][i];
            for(int l=i;l<N;l++)
            {
                A[i][l]=A[i][l]/kof;
            }
            b[i]=b[i]/kof;
            for(int j=i+1;j<N;j++)
            {
                kof=A[j][i];
                for(int k=i;k<N;k++)
                {
                    A[j][k]=A[j][k]-A[i][k]*kof;
                }
                b[j]=b[j]-b[i]*kof;
            }
        }
    x[N-1]=b[N-1];
    x[N-2]=b[N-2] - A[N-2][N-1]*x[N-1];
    for(int i=N-3;i>=0;i--)
    {
        double sum=0;
        for(int j=i+1;j<N;j++)
        {
            sum+=A[i][j]*x[i];
        }
        x[i]=(b[i]-sum)/A[i][i];
    }

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


/**
 * ���� �� ����������� �������
 */
void klyushenkovaa::lab8()
{

}
