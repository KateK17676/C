
#include <cstdlib>

int main(int argc, char* argv[])
{
    int row = 5, col = 6;

    int** matrix = (int**)malloc(sizeof(int*) * row);
    for (int i = 0; i < row; ++i)
    {
        matrix[i] = (int*)malloc(sizeof(int) * col);
    }

    
    return 0;
}
