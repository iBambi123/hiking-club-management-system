#include "MemberList.h"

#include <iostream>

void MemberList::addMember(const Member& member) { members_.push_back(member); }

bool MemberList::removeMember(int id) {
    for (size_t i = 0; i < members_.size(); ++i) {
        if (members_[i].getId() == id) {
            members_.erase(members_.begin() + i);
            return true;
        }
    }
    return false;
}

Member* MemberList::findMember(int id) {
    for (Member& member : members_) {
        if (member.getId() == id) {
            return &member;
        }
    }
    return nullptr;
}

void MemberList::printAll() const {
    if (members_.empty()) {
        std::cout << "(no members)" << std::endl;
        return;
    }
    for (const Member& member : members_) {
        member.print();
    }
}

void MemberList::clear() { members_.clear(); }

int MemberList::size() const { return static_cast<int>(members_.size()); }
