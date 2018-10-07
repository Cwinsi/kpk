#include <utility>

//
// Created by grigo on 27.09.2018.
//

#include "User.h"

User::User(std::string name, std::string surname) {
    this->name = std::move(name);
    this->surname = std::move(surname);
    this->type = std::string("");
}

std::string User::getName() {
    return this->name;
}

std::string User::getSurname() {
    return this->surname;
}

std::string User::getType() {
    return this->type;
}

void User::setType(std::string type) {
    this->type = std::move(type);
}

User makeATeacher(User user){
    user.setType("teacher");
    return user;
}

User makeAStudent(User user){
    user.setType("student");
    return user;
}
