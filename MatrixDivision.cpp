#include <iostream>
#include <iomanip>
using namespace std;
double Determinant(int size, int matrix1[][100])
{

    int value = 1;
    int value1 = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                value = value * matrix1[i][j];
            }
            else
            {
                value1 = value1 * matrix1[i][j];
            }
        }
    }
    int result = value - value1;
    return result;
}
void Adjugate(int size, int determinant, int matrix1[][100], int matrix2[][100])
{
    int result[100][100];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result[i][j] = matrix1[i][j];
        }
    }
    for (int i = 0; i < size / 2; i++)
    {
        int temp = result[i][i];
        result[i][i] = result[size - 1 - i][size - 1 - i];
        result[size - 1 - i][size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                result[i][j] = -matrix1[i][j];
            }
        }
    }
    cout << "The adjugate of matrix is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    int result1[100][100];
    cout << "Find the inverse of B " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result1[i][j] = (1.0 / determinant) * result[i][j];
            cout << fixed << setprecision(2) << result1[i][j] << " ";
        }
        cout<<endl;
    }
    
    double division[100][100] = {0};
    cout << "The division of two square matrix is A * Binverse" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                division[i][j] = division[i][j] + (matrix2[k][i] * result1[i][k]);
            }
            cout << fixed << setprecision(2) << division[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int size;
    double determinant;
    cout << "enter the size of square matrix : " << endl;
    cin >> size;
    int matrix2[100][100];
    cout << "Enter elements of A matrix " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "the matrix is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    int matrix1[100][100];
    cout << "Enter elements of B matrix " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "the matrix is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    /**/

    determinant = Determinant(size, matrix1);
    // cout<<"The determinant is : "<<determinanat;

    Adjugate(size, determinant, matrix1, matrix2);
    return 0;
}