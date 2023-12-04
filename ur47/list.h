
#include "task.h"
#include <iostream>

void Task::addTask() {
    std::cout << "Enter task title: ";
    std::cin.getline(title, sizeof(title));

    std::cout << "Enter task priority (1 - low, 2 - medium, 3 - high): ";
    std::cin >> priority;

    std::cout << "Enter task description: ";
    std::cin.ignore();
    std::cin.getline(description, sizeof(description));

    std::cout << "Enter task due date (day month year): ";
    std::cin >> day >> month >> year;

    std::cout << "Enter task due time (hour minute): ";
    std::cin >> hour >> minute;
}

void Task::deleteTask() {
 
    std::cout << "Task deleted." << std::endl;
}

void Task::editTask() {
    std::cout << "Enter new task title: ";
    std::cin.ignore();
    std::cin.getline(title, sizeof(title));

    std::cout << "Enter new task priority (1 - low, 2 - medium, 3 - high): ";
    std::cin >> priority;

    std::cout << "Enter new task description: ";
    std::cin.ignore();
    std::cin.getline(description, sizeof(description));

    std::cout << "Enter new task due date (day month year): ";
    std::cin >> day >> month >> year;

    std::cout << "Enter new task due time (hour minute): ";
    std::cin >> hour >> minute;
}

void Task::searchTaskByTitle(const char* searchTitle) {
    if (strcmp(title, searchTitle) == 0) {
        std::cout << "Task found: " << title << std::endl;
    }
    else {
        std::cout << "Task not found." << std::endl;
    }
}

void Task::searchTaskByPriority(int searchPriority) {
    if (priority == searchPriority) {
        std::cout << "Task found with priority: " << priority << std::endl;
    }
    else {
        std::cout << "Task not found." << std::endl;
    }
}

void Task::searchTaskByDescription(const char* searchDescription) {
    if (strcmp(description, searchDescription) == 0) {
        std::cout << "Task found with description: " << description << std::endl;
    }
    else {
        std::cout << "Task not found." << std::endl;
    }
}

void Task::searchTaskByDateTime(int searchDay, int searchMonth, int searchYear, int searchHour, int searchMinute) {
    if (day == searchDay && month == searchMonth && year == searchYear && hour == searchHour && minute == searchMinute) {
        std::cout << "Task found with due date and time: " << day << "/" << month << "/" << year << " " << hour << ":" << minute << std::endl;
    }
    else {
        std::cout << "Task not found." << std::endl;
    }
}
