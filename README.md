# Hiking Club Management System

A C++ console application for managing a hiking club's hikes and members. I built it as my first programming capstone, and it was my introduction to object-oriented design with multiple cooperating classes.

> **Note:** The original source files were lost during a machine migration. I am rebuilding the project in this repo from the original design.

## Features

- **Hike management:** add, remove, and list hikes in the catalog
- **Member management:** add and remove members, look up member details and points
- **Filtering:** view hikes by location, difficulty, or duration
- **Sorting:** sort hikes by duration or by price
- **Error handling:** clear messages when a hike or member is not found

## Architecture

| Class | Responsibility |
|-------|----------------|
| `Hike` | One hike: name, location, difficulty, duration in days, price |
| `HikeList` | The collection of hikes, plus filtering and sorting |
| `Member` | One club member: ID, name, points |
| `MemberList` | The collection of members, plus lookup |

Each class has its own header (`.h`) and implementation (`.cpp`) file, with `main.cpp` as the driver.

## What I learned

- Designing classes that work together instead of writing one long file
- Encapsulation and separating interface from implementation
- Managing collections of objects: searching, filtering, and sorting

## Tech

C++, built with Visual Studio 2022
