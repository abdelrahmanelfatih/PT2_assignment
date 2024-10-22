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
    //this function maps the score to it's grade by hashing the lower bound of the grade with the score so if your score is 84 it hashes it with 30 and you get A
    std::map <double, std::string> gradeMap = {
        {90 , "A+"} ,
        {80 , "A"} ,
        {75 , "A-"} ,
        {70 , "B+"} ,
        {65 , "B"} ,
        {60 , "B-"} ,
        {55 , "C+"} ,
        {50 , "C"} ,
        {45 , "C-"} ,
        {40 , "D+"} ,
        {35 , "D"} ,
        {30 , "D-"}
    };

    for(auto r = gradeMap.rbegin(); r != gradeMap.rend(); ++r) { //this is a reverse iterator , i used it because order map starts from down up so basically it will check if 90(the score) > 30 (the beginning of the map) so u get E instead of A+
        if(score >= r->first) {
            return r->second; //r is a pointer
        }
    }

    return "E"; //the default case of the function
}

double Course::calculateGradePoint() {
    std::map <std::string, double> pointMap = { //a map to hash the grade with the point
        {"A+" , 4.00},
        {"A" , 4.00},
        {"A-" , 3.67},
        {"B+" , 3.33},
        {"B" , 3.00},
        {"B-" , 2.67},
        {"C+" , 2.33},
        {"C" , 2.00},
        {"C-" , 1.67},
        {"D+" , 1.33},
        {"D" , 1.00},
        {"D-" , 0.67}
    };
    std::string grade = calculateGrade();

    return pointMap.count(grade) > 0 ? pointMap[grade] : 0.0; // return the point if the grade exists in the map, if the grade doesn't exist in the map return 0.
}

double Course::calculatePoint(int creditHour) {
    return creditHour * calculateGradePoint();
}

