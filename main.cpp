#include <iostream>
#include <string>
#include <cctype>
#include "course.h"

int main() {
    Course course;
    std::string courseName, courseCode;
    double score;
    int creditHour;

    std::cout << "Enter the following data: " << std::endl;

    std::cout << "Subject name => ";
    std::getline(std::cin, courseName);

    std::cout << std::endl << "Subject code => ";
    std::getline(std::cin, courseCode);

    std::cout << std::endl << "Score earned => ";
    std::cin >> score;

    // Cute lil error handling
    if (!courseCode.empty() && std::isdigit(courseCode.back())) { creditHour = courseCode.back() - '0'; }
    else { exit(1); }

    std::cout <<"\n \n"  << "THE RESULT" << "\n \n"
        << courseName << std::endl
        << courseCode << std::endl
        << creditHour << std::endl
        << score << std::endl;
    return 0;
}
