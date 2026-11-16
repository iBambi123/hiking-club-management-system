#include <iostream>
#include <string>
#include <vector>

#include "Hike.h"
#include "HikeList.h"
#include "Member.h"
#include "MemberList.h"

// Prints a heading followed by each hike in the list.
void printHikes(const std::string& heading, const std::vector<Hike>& hikes) {
    std::cout << heading << std::endl;
    if (hikes.empty()) {
        std::cout << "(no hikes)" << std::endl;
    }
    for (const Hike& hike : hikes) {
        hike.print();
    }
    std::cout << std::endl;
}

int main() {
    // ----- Hikes -----
    HikeList hikes;
    hikes.addHike(Hike("Half Dome", "California", "Hard", 2, 250.00));
    hikes.addHike(Hike("Muir Woods Loop", "California", "Easy", 1, 40.00));
    hikes.addHike(Hike("Lost Coast Trail", "California", "Moderate", 4, 380.00));
    hikes.addHike(Hike("Angels Landing", "Utah", "Hard", 1, 95.00));
    hikes.addHike(Hike("Wonderland Trail", "Washington", "Hard", 6, 720.00));
    hikes.addHike(Hike("Hoh Rain Forest", "Washington", "Easy", 1, 55.00));

    std::cout << "All hikes" << std::endl;
    hikes.printAll();
    std::cout << std::endl;

    printHikes("Hikes in California", hikes.findByLocation("California"));
    printHikes("Easy hikes", hikes.findByDifficulty("Easy"));
    printHikes("Hikes lasting 6 days", hikes.findByDuration(6));

    hikes.sortByDuration();
    std::cout << "Hikes sorted by duration" << std::endl;
    hikes.printAll();
    std::cout << std::endl;

    hikes.sortByPrice();
    std::cout << "Hikes sorted by price" << std::endl;
    hikes.printAll();
    std::cout << std::endl;

    if (hikes.removeHike("Angels Landing")) {
        std::cout << "Removed Angels Landing" << std::endl;
    }
    if (!hikes.removeHike("Mount Everest")) {
        std::cout << "Hike not found: Mount Everest" << std::endl;
    }
    std::cout << std::endl;

    // ----- Members -----
    MemberList members;
    members.addMember(Member(111, "Alex Kim"));
    members.addMember(Member(112, "Jordan Lee", 30));
    members.addMember(Member(113, "Sam Rivera", 10));

    std::cout << "All members" << std::endl;
    members.printAll();
    std::cout << std::endl;

    Member* member = members.findMember(112);
    if (member != nullptr) {
        member->addPoints(20);
        std::cout << "Points for Member 112: " << member->getPoints()
                  << std::endl;
    }

    if (members.findMember(999) == nullptr) {
        std::cout << "Member not found: 999" << std::endl;
    }

    if (members.removeMember(113)) {
        std::cout << "Removed Member 113" << std::endl;
    }
    std::cout << std::endl;

    // ----- Clearing both lists -----
    hikes.clear();
    members.clear();
    std::cout << "After clearing: " << hikes.size() << " hikes, "
              << members.size() << " members" << std::endl;

    return 0;
}
