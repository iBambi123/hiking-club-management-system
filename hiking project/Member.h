#ifndef MEMBER_H
#define MEMBER_H

#include <string>

// Represents a single club member.
class Member {
public:
    Member(int id, const std::string& name, int points = 0);

    int getId() const;
    const std::string& getName() const;
    int getPoints() const;

    // Members earn points for the hikes they join.
    void addPoints(int points);

    // Prints the member on one line.
    void print() const;

private:
    int id_;
    std::string name_;
    int points_;
};

#endif
