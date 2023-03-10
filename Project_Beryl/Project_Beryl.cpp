#include <iostream>
#include <ctime>

using namespace std;

int** create_array2d(size_t a, size_t b)
{
    int** m = new int* [a];
    m[0] = new int [a * b];

    for (size_t i = 1; i < a; ++i)
    {
        m[i] = m[i - 1] + b;
    }

    return m;
}

void free_array2d(int** m)
{
    delete[] m[0];
    delete[] m;
}

void init_array2d(int** m, size_t a, size_t b)
{
    srand(time(NULL));
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            m[i][j] = rand() % 100;
        }
    }
}

void print_array2d(int** m, size_t a, size_t b)
{
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < b; j++)
        {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}

int** transpose(const int* const* m, unsigned rows, unsigned cols)
{
    int** t = create_array2d(cols, rows);

    for (unsigned i = 0; i < rows; ++i)
    {
        for (unsigned j = 0; j < cols; ++j)
        {
            t[j][i] = m[i][j];
        }
    }

    return t;
}

void swap_min(int* m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
    int index = 0;

    for (unsigned i = 0; i < rows; i++)
    {
        for (unsigned j = 0; j < cols; j++)
        {
            if (m[i][j] < min)
            {
                min = m[i][j];
                index = i;
                cout << endl;
                cout << "Min:  " << min << "\tIndex: " << index << endl;
            }
        }
    }

    if(index != 0)
    {
        for (unsigned i = 0; i < cols; i++)
        {
            m[0][i] += m[index][i];
            m[index][i] = m[0][i] - m[index][i];
            m[0][i] -= m[index][i];
        }
    }
} 

int main()
{
    int** m = create_array2d(4, 5);

    init_array2d(m, 4, 5);

    print_array2d(m, 4, 5);

    swap_min(m, 4, 5);

    cout << endl << endl;

    print_array2d(m, 4, 5);

    free_array2d(m);
   

    return 0;
}