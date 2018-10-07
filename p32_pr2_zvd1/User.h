//
// Created by grigo on 27.09.2018.
//

#ifndef P32_PR2_ZVD2_USER_H
#define P32_PR2_ZVD2_USER_H

#include <string>

class User {
private:
    std::string type;
    std::string name;
    std::string surname;
public:
    User(std::string name, std::string surname);
    void setType(std::string type);
    std::string getName();
    std::string getSurname();
    std::string getType();
};

User makeATeacher(User user);
User makeAStudent(User user);

#endif //P32_PR2_ZVD2_USER_H
