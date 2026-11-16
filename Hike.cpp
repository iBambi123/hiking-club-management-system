#include "Hike.h"

#include <iomanip>
#include <iostream>

Hike::Hike(const std::string& name, const std::string& location,
           const std::string& difficulty, int durationDays, double price)
    : name_(name),
      location_(location),
      difficulty_(difficulty),
      durationDays_(durationDays),
      price_(price) {}

const std::string& Hike::getName() const { return name_; }

const std::string& Hike::getLocation() const { return location_; }

const std::string& Hike::getDifficulty() const { return difficulty_; }

int Hike::getDurationDays() const { return durationDays_; }

double Hike::getPrice() const { return price_; }

void Hike::print() const {
    std::cout << name_ << " (" << location_ << ") - " << difficulty_ << ", "
              << durationDays_ << " day(s), $" << std::fixed
              << std::setprecision(2) << price_ << std::endl;
}
