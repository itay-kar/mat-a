#include "mat.hpp"
using namespace ariel;

#include "doctest.h"

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good Inputs"){
    //Checking mat output is correct
CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
													 "@-------@\n"
													 "@-@@@@@-@\n"
													 "@-@---@-@\n"
													 "@-@@@@@-@\n"
													 "@-------@\n"
													 "@@@@@@@@@"));

CHECK(nospaces(mat(1, 1, '@', '-')) == nospaces("@\n"));
// diffrenet symbols mat check
CHECK(nospaces(mat(9, 7, '#', '-')) == nospaces("#########\n"
													 "#-------#\n"
													 "#-#####-#\n"
													 "#-#---#-#\n"
													 "#-#####-#\n"
													 "#-------#\n"
													 "#########"));

CHECK(nospaces(mat(1, 3, '@', '-')) == nospaces("\n@\n@\n@\n"));

//Checking 1 Col
CHECK(mat(1,3,'D',':') == "\nD\nD\nD\n");

//Checking 1 Row
CHECK(mat(3,1,'D',':') == "\nDDD\n");


// Checking equals on vary inputs 
CHECK_EQ(mat(3,3,'%','!'),"\n%%%\n%!%\n%%%\n");
CHECK_EQ(mat(3,1,'%','!'),mat(3,1,'%','@'));
CHECK_EQ(mat(1,3,'%','!'),mat(1,3,'%','@'));



// Checking not equales string and function outputs
CHECK_NE(mat(3,3,'%','!'),"\n%%%\n%(%\n%%%");
CHECK_NE(mat(7,9,'#','$'),mat(7,9,'!','$'));
CHECK_NE(mat(7,9,'#','$'),mat(9,7,'#','$'));
CHECK_NE(mat(1,3,'%','!'),mat(1,5,'%','!'));


// Checking NO THROW
CHECK_NOTHROW(mat(23,47,'a','b'));
CHECK_NOTHROW(mat(15,13,'^','('));

//
}



TEST_CASE("Bad Inputs"){
    /// Checking col is even throws
    CHECK_THROWS(mat(2,5,'@','$'));
    /// Checking row is even throw
    CHECK_THROWS(mat(1,4,'@','$'));
    /// Checking col && row is even throws
    CHECK_THROWS(mat(22,22,'@','$'));
    //Checking for negative integers throw
    CHECK_THROWS(mat(-1,3,'@','$'));
    CHECK_THROWS(mat(11,-3,'@','$'));


    /// checking message is good
    CHECK_THROWS_MESSAGE(mat(2,4,'2','3'),"row and col size must be odd");
    CHECK_THROWS_MESSAGE(mat(2,4,'2','3'),"row and col size must be odd");

}


