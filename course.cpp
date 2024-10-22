//
// Created by nar7g on 10/22/2024.
//
#include <string>
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