#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 100;

class Person{
    protected:
        char name[];
        int age;
    public:
        Person(char the_name[], int the_age){
            strcpy(name, the_name);
            age = the_age;
        }
        void happy_birthday(){
            age++;
            cout << "It's your birthday today!";
        }
};

class Student: public Person{
        protected:
            int badge_num;
            char faculty[];
        public:
            Student(char the_name[], int the_age, int the_badge_num, char the_faculty[]){
            badge_num = the_badge_num;
            strcpy(faculty, the_faculty);
            }
            void change_faculty(char new_faculty[]){
                cin.getline(new_faculty, MAX_SIZE);
                strcpy(faculty, new_faculty);
            }
};
