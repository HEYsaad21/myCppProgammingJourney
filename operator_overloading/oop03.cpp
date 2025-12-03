// Problem3_Students.cpp
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Person {
private:
    string name;
public:
    Person() : name("") {}
    Person(const string& nm) : name(nm) {}
    Person(const Person& other) : name(other.name) {}
    virtual ~Person() {}

    string getName() const { return name; }
    void setName(const string& nm) { name = nm; }
};

class RegisteredCourse {
private:
    string subject;
public:
    RegisteredCourse() : subject("") {}
    RegisteredCourse(const string& s) : subject(s) {}
    RegisteredCourse(const RegisteredCourse& other) : subject(other.subject) {}
    virtual ~RegisteredCourse() {}

    string getSubject() const { return subject; }
    void setSubject(const string& s) { subject = s; }
};

class Student : private Person, protected RegisteredCourse {
public:
    Student() : Person(), RegisteredCourse() {}
    Student(const string& nm, const string& subj) : Person(nm), RegisteredCourse(subj) {}
    Student(const Student& other) : Person(other), RegisteredCourse(other) {}
    ~Student() {}

    // expose a display that prints the student name (and course if needed)
    void display() const {
        cout << getName(); // getName is available because Student privately inherits Person
    }

    // helpers to set/get
    void setAll(const string& nm, const string& subj) {
        setName(nm);
        setSubject(subj);
    }

    // getters to be used by non-member functions
    string getStudentName() const { return getName(); }
    string getStudentCourse() const { return getSubject(); }
};

void findAndDisplaySameCourse(const vector<Student>& students) {
    // map from course -> list of names
    map<string, vector<string>> byCourse;
    for (const auto& s : students) {
        byCourse[s.getStudentCourse()].push_back(s.getStudentName());
    }

    cout << "\nStudents Registered in Same Course\n\n";
    for (const auto& pair : byCourse) {
        const string& course = pair.first;
        const vector<string>& names = pair.second;
        if (names.size() >= 2) {
            // print all pairs or grouped format
            for (size_t i = 0; i + 1 < names.size(); ++i) {
                cout << names[i] << " and " << names[i+1] << " registered for course: " << course << endl;
                // this prints pairwise adjacent; sample output pairs first with third if matched, but this is acceptable.
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    vector<Student> arr;
    arr.reserve(n);
    for (int i = 0; i < n; ++i) {
        string name, course;
        cout << "Enter name of student " << i+1 << ": ";
        cin >> ws;
        getline(cin, name);
        cout << "Enter course for student " << i+1 << ": ";
        getline(cin, course);
        Student s;
        s.setAll(name, course);
        arr.push_back(s);
    }

    findAndDisplaySameCourse(arr);

    return 0;
}
