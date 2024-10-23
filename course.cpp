#include <string>
#include <map>
#include "course.h"

void Course::setName(std::string name) {
    this->name = name;
}

void Course::setCode(std::string code) {
    this->code = code;
}

void Course::setScore(double score) {
    this->score = score;
}

std::string Course::getName() const {
    return name;
}

std::string Course::getCode() const {
    return code;
}

double Course::getScore() const {
    return score;
}

std::string Course::calculateGrade() {
    // Mapping score ranges to grades
    std::map<double, std::string> gradeMap = {
        {90, "A+"}, {80, "A"}, {75, "A-"},
        {70, "B+"}, {65, "B"}, {60, "B-"},
        {55, "C+"}, {50, "C"}, {45, "C-"},
        {40, "D+"}, {35, "D"}, {30, "D-"}
    };

    for(auto r = gradeMap.rbegin(); r != gradeMap.rend(); ++r) {
        if(score >= r->first) {
            return r->second;
        }
    }
    return "E"; // Default case for failing
}

double Course::calculateGradePoint() {
    std::map<std::string, double> pointMap = {
        {"A+", 4.00}, {"A", 4.00}, {"A-", 3.67},
        {"B+", 3.33}, {"B", 3.00}, {"B-", 2.67},
        {"C+", 2.33}, {"C", 2.00}, {"C-", 1.67},
        {"D+", 1.33}, {"D", 1.00}, {"D-", 0.67}
    };
    std::string grade = calculateGrade();

    return pointMap.count(grade) > 0 ? pointMap[grade] : 0.0; // Default point for failing
} // Closing brace added here

double Course::calculatePoint(int creditHour) {
    return creditHour * calculateGradePoint();
}
