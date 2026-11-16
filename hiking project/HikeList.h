#ifndef HIKELIST_H
#define HIKELIST_H

#include <string>
#include <vector>

#include "Hike.h"

// Manages the club's catalog of hikes.
class HikeList {
public:
    void addHike(const Hike& hike);

    // Removes the hike with the given name.
    // Returns false if no hike has that name.
    bool removeHike(const std::string& name);

    // Filters: each returns a new list and leaves the catalog unchanged.
    std::vector<Hike> findByLocation(const std::string& location) const;
    std::vector<Hike> findByDifficulty(const std::string& difficulty) const;
    std::vector<Hike> findByDuration(int durationDays) const;

    // Sorts: each reorders the catalog from lowest to highest.
    void sortByDuration();
    void sortByPrice();

    void printAll() const;
    void clear();
    int size() const;

private:
    std::vector<Hike> hikes_;
};

#endif
