#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    std::string name, code;
    double score;

public:
    // Constructors and destructor
    Course(std::string name, std::string code, double score)
        : name(name), code(code), score(score) {}
    Course() : name{}, code{}, score{} {}
    ~Course() {}

    // Setters
    void setName(std::string name);
    void setCode(std::string code);
    void setScore(double score);

    // Getters
    std::string getName() const;
    std::string getCode() const;
    double getScore() const;

    // Grade calculation methods
    std::string calculateGrade();
    double calculateGradePoint();
    double calculatePoint(int creditHour);
};

#endif //COURSE_H
