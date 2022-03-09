#include "mat.hpp"
using namespace ariel;

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

string ariel::mat(int col, int row, char a, char b)
{
    if (col < 0 || row < 0)
    {
        throw invalid_argument("row and col size must be positive");
    }

    if (col % 2 == 0 || row % 2 == 0)
    {
        throw invalid_argument("row and col size must be odd");
    }

    // char sym;
    // char matrix[col][row];
    string mat = "";
    // int mid_col = (col / 2);
    // int mid_row = (row / 2);
    // int square = 0;
    // int dir = 1;
    // int i = 0, j = 0;

    // while (i != mid_row || j != mid_col)
    // {
    //     if (square % 2 == 0)
    //     {
    //         sym = a;
    //     }

    //     else
    //     {
    //         sym = b;
    //     }

    //     switch (dir)
    //     {
    //     case 1: // right
    //         if (j < col - square -1)
    //         {
    //             matrix[i][j] = sym;
    //             j++;
    //             break;
    //         }
    //         else
    //         {
    //             dir = 2;
    //             break;
    //         }

    //     case 2: // down
    //         matrix[i][j] = sym;
    //         if (i < row - square -1)
    //         {
    //             i++;
    //             break;
    //         }
    //         else
    //         {
    //             dir = 3;
    //             break;
    //         }
    //     case 3: // left
    //         matrix[i][j] = sym;
    //         if (j > 0 + square)
    //         {
    //             j--;
    //             break;
    //         }
    //         else
    //         {
    //             dir = 4;
    //             break;
    //         }
    //     case 4: // up
    //         matrix[i][j] = sym;
    //         if (i > 0 + square)
    //         {
    //             i--;
    //             break;
    //         }
    //         else
    //         {
    //             dir = 1;
    //             square += 1;
    //             i++;
    //             j++;
    //             break;
    //         }
    //         break;

    //     default:
    //         break;
    //     }
    // }
    
    
    // for (size_t i = 0; i < row; i++)
    // {
    //     for (size_t j = 0; j < col; j++)
    //     {
    //         mat+=matrix[i][j];
    //     }
    //     mat+='\n';
    // }
    
    return mat;
};


// int main(int argc, char const *argv[]) 
// {
//     string check = mat(3,3,'a','b');
//     std::cout << check << std::endl;
//     return 0;
// }
