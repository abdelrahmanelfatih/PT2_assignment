#ifndef COURSE_H
#define COURSE_H
#endif //COURSE_H

#include <string>


class Course {
    //class members are private by default
    std::string name , code;
    double score;

public:
    //constructor and destructor block
    Course(std::string name, std::string code, double score)
    : name(name), code(code), score(score) {} //sets the variables to the attributes in the class
    Course() : name{} , code{} , score{} {} //resets the variables and makes them empty
    ~Course(){}

    //methods declaration
    void setName(std::string name);
    void setCode(std::string code);
    void setScore(double score);
    std::string getName() const;
    std::string getCode() const;
    double getScore() const;
    std::string calculateGrade();
    double calculateGradePoint();
    double calculatePoint(int creditHour);

};
