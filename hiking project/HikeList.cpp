#include "HikeList.h"

#include <algorithm>
#include <iostream>

void HikeList::addHike(const Hike& hike) { hikes_.push_back(hike); }

bool HikeList::removeHike(const std::string& name) {
    for (size_t i = 0; i < hikes_.size(); ++i) {
        if (hikes_[i].getName() == name) {
            hikes_.erase(hikes_.begin() + i);
            return true;
        }
    }
    return false;
}

std::vector<Hike> HikeList::findByLocation(const std::string& location) const {
    std::vector<Hike> matches;
    for (const Hike& hike : hikes_) {
        if (hike.getLocation() == location) {
            matches.push_back(hike);
        }
    }
    return matches;
}

std::vector<Hike> HikeList::findByDifficulty(
    const std::string& difficulty) const {
    std::vector<Hike> matches;
    for (const Hike& hike : hikes_) {
        if (hike.getDifficulty() == difficulty) {
            matches.push_back(hike);
        }
    }
    return matches;
}

std::vector<Hike> HikeList::findByDuration(int durationDays) const {
    std::vector<Hike> matches;
    for (const Hike& hike : hikes_) {
        if (hike.getDurationDays() == durationDays) {
            matches.push_back(hike);
        }
    }
    return matches;
}

void HikeList::sortByDuration() {
    std::sort(hikes_.begin(), hikes_.end(), [](const Hike& a, const Hike& b) {
        return a.getDurationDays() < b.getDurationDays();
    });
}

void HikeList::sortByPrice() {
    std::sort(hikes_.begin(), hikes_.end(), [](const Hike& a, const Hike& b) {
        return a.getPrice() < b.getPrice();
    });
}

void HikeList::printAll() const {
    if (hikes_.empty()) {
        std::cout << "(no hikes)" << std::endl;
        return;
    }
    for (const Hike& hike : hikes_) {
        hike.print();
    }
}

void HikeList::clear() { hikes_.clear(); }

int HikeList::size() const { return static_cast<int>(hikes_.size()); }
