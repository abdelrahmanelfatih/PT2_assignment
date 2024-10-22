#include <iostream>
#include <string>
#include <cctype>
#include "course.h"

int main() {
    std::string courseName, courseCode;
    double score;
    int creditHour;

    //user input code block
    std::cout << "Enter the following data: " << std::endl;

    std::cout << "Subject name => ";
    std::getline(std::cin, courseName);

    std::cout << std::endl << "Subject code => ";
    std::getline(std::cin, courseCode);

    std::cout << std::endl << "Score earned => ";
    if (!(std::cin >> score) || score < 0 || score > 100) { //takes score as input while checking if score is less than 0 or more than 100
        std::cerr << "Invalid input." << std::endl;
        return 1;
    } //this code block takes in score as input while also handling potential errors

    Course course(courseName, courseCode, score);

    // Cute lil error handling as well
    if (!courseCode.empty() && std::isdigit(courseCode.back())) { creditHour = courseCode.back() - '0'; }
    else {
        std::cerr << "Error : Invalid Course code ";
        return 1;
    }

    //user output code block
    std::cout << "\n THE RESULT \n"
        << "Subject Code : "  << courseCode << std::endl
        << "Subject Name : " << courseName << std::endl
        << "Credit Hour : "  << creditHour << std::endl
        <<"Score Earned : " << score << std::endl
         << "Grade Earned : " << course.calculateGrade() << std::endl
        << "Grade Point : " << course.calculateGradePoint() << std::endl
         << "Point Earned : " << course.calculatePoint(creditHour) << std::endl;
    return 0;
}
