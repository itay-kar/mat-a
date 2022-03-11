#include "mat.hpp"
using namespace ariel;

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

string ariel::mat(int col, int row, char a, char b)
{
    if (col < 0 || row < 0)
    {
        throw invalid_argument("row and col size must be positive");
        return "";
    }

    if (col % 2 == 0 || row % 2 == 0)
    {
        throw invalid_argument("row and col size must be odd");
        return "";
    }

    string mat = "\n";
    string temp;
    int mid = (row / 2) + 1;
    std::vector<string> temp_array;
    int i = 0;
    int sym = 0;

    /// init row
    for (size_t i = 0; i < col; i++)
    {
        temp += a;
    }

    i = 0;

    while (i < mid)
    {
        // cout << i << "temp = " << temp << '\n'
        //      << endl;
        for (int j = i; j < col - i; j++)
        {
            if (sym % 2 == 0)
            {
                temp.at(j) = a;
            }
            else
            {
                temp.at(j) = b;
            }
        }
        // cout << i << "temp after = " << temp << '\n'
        //      << endl;
        temp_array.push_back(temp);
        i++;
        sym += 1;
    }

    
    i = 0;
    int next = 1;
    while (true)
    {
        if (i == -1)
        {
            break;
        }

        mat += temp_array[i];
        mat += '\n';
        if (i == mid - 1)
        {
            next = -1;
        }
        i += next;
    }

    return mat;
}

// int main(int argc, char const *argv[])
// {

//     std::cout << "Printing Mat 13/5: \n\n"
//               << mat(5,13,'@','-') << std::endl;

//     string check = mat(13, 5,'@','-');
//     std::cout << "Printing Mat 5/7: \n\n"
//               << check << std::endl;

//     check = mat(7, 5, 'a', 'b');
//     std::cout << "Printing Mat 7/5: \n\n"
//               << check << std::endl;

//     check = mat(5, 5, 'a', 'b');
//     std::cout << "Printing Mat 5/5: \n\n"
//               << check << std::endl;

//     check = mat(5, 3, 'a', 'b');
//     std::cout << "Printing Mat 5/3: \n\n"
//               << check << std::endl;

//     check = mat(99, 99, '@', '#');
//     std::cout << "Printing Mat 3/5: \n\n"
//               << check << std::endl;

//     return 0;
// }