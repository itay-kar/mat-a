#include "mat.hpp"
using namespace ariel;

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdexcept>
using namespace std;

string ariel::mat(int col,int row,char a,char b){
if (col < 0 || row < 0 ){
        throw invalid_argument("row and col size must be positive");
    }

    if (col % 2 == 0 || row % 2 == 0 ){
        throw invalid_argument("row and col size must be odd");
    }

    string mat = "";
    int lines = (row/2)+1;

    for (size_t i = 0; i < lines; i++)
    {
        
    }

    return "";
};

