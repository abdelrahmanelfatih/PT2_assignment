#ifndef COURSE_H
#define COURSE_H
#include <string>

#endif //COURSE_H

class Course {
private:
    std::string name , code;
    double score;

public:
    Course(std::string name, std::string code, double score)
    : name(name), code(code), score(score) {}
    Course() : name{} , code{} , score{} {}
    ~Course(){}
    void setName(std::string name);
    void setCode(std::string code);
    void setScore(double score);
    std::string getName() const;
    std::string getCode() const;
    double getScore() const;
    std::string calculateGrade();

};