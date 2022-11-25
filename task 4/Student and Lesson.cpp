#include <iostream>
#include <vector>
#include <string>

struct Student;

struct Lesson {
    std::string name_of_lesson;
    std::vector<Student*> list_of_students;
    void print_class();
};

struct Student {
    std::string name;
    std::vector<Lesson*> table_lessons;
    void print_lessons(){
        std::cout << name << " has lessons: " << endl;
        for (auto lesson : table_lessons){
            std::cout << (*lesson).name_of_lesson << endl;
        }
    }
};

void Lesson::print_class() {
    std::cout << "list of students that study " << name_of_lesson  << ":" << endl;
    for (auto student : list_of_students){
        std::cout << (*student).name << endl;
    }
}

int main() {
    Lesson math;
    math.name_of_lesson = "math";
    Lesson physics;
    physics.name_of_lesson = "physics";
    Lesson english;
    english.name_of_lesson = "english";

    Student student_1;
    student_1.name = "student_1";
    Student student_2;
    student_2.name = "student_2";
    Student student_3;
    student_3.name = "student_3";

    student_1.table_lessons.push_back(&math);
    math.list_of_students.push_back(&student_1);
    student_1.table_lessons.push_back(&physics);
    physics.list_of_students.push_back(&student_1);

    student_2.table_lessons.push_back(&math);
    math.list_of_students.push_back(&student_2);
    student_2.table_lessons.push_back(&english);
    english.list_of_students.push_back(&student_2);

    student_3.table_lessons.push_back(&math);
    math.list_of_students.push_back(&student_3);
    student_3.table_lessons.push_back(&physics);
    physics.list_of_students.push_back(&student_3);
    student_3.table_lessons.push_back(&english);
    english.list_of_students.push_back(&student_3);

    student_1.print_lessons();
    math.print_class();

}
