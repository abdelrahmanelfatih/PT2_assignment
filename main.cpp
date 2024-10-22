#include <iostream>
#include "course.h"

int main() {
    Course test("hehe" , "hoho" , 29);
    std::cout << test.calculateGrade();
    return 0;
}
