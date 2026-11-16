#include "Member.h"

#include <iostream>

Member::Member(int id, const std::string& name, int points)
    : id_(id), name_(name), points_(points) {}

int Member::getId() const { return id_; }

const std::string& Member::getName() const { return name_; }

int Member::getPoints() const { return points_; }

void Member::addPoints(int points) { points_ += points; }

void Member::print() const {
    std::cout << "Member " << id_ << ": " << name_ << " (" << points_
              << " points)" << std::endl;
}
