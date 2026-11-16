#ifndef HIKE_H
#define HIKE_H

#include <string>

// Represents a single hike offered by the club.
class Hike {
public:
    Hike(const std::string& name, const std::string& location,
         const std::string& difficulty, int durationDays, double price);

    const std::string& getName() const;
    const std::string& getLocation() const;
    const std::string& getDifficulty() const;
    int getDurationDays() const;
    double getPrice() const;

    // Prints the hike on one line.
    void print() const;

private:
    std::string name_;
    std::string location_;
    std::string difficulty_;  // "Easy", "Moderate", or "Hard"
    int durationDays_;
    double price_;
};

#endif
