//
// Created by nar7g on 10/22/2024.
//
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
    for(auto r = gradeMap.rbegin(); r != gradeMap.rend(); ++r) {
        if(score >= r->first) {
            return r->second;
        }
    }

    return "E";
}
