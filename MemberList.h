#ifndef MEMBERLIST_H
#define MEMBERLIST_H

#include <vector>

#include "Member.h"

// Manages the club's members.
class MemberList {
public:
    void addMember(const Member& member);

    // Removes the member with the given ID.
    // Returns false if no member has that ID.
    bool removeMember(int id);

    // Returns a pointer to the member with the given ID,
    // or nullptr if no member has that ID.
    Member* findMember(int id);

    void printAll() const;
    void clear();
    int size() const;

private:
    std::vector<Member> members_;
};

#endif
