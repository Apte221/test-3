
#ifndef TASK_H
#define TASK_H

struct Task {
    char title[100];
    int priority;
    char description[200];
    int day;
    int month;
    int year;
    int hour;
    int minute;

    void addTask();
    void deleteTask();
    void editTask();
    void searchTaskByTitle(const char* searchTitle);
    void searchTaskByPriority(int searchPriority);
    void searchTaskByDescription(const char* searchDescription);
    void searchTaskByDateTime(int searchDay, int searchMonth, int searchYear, int searchHour, int searchMinute);
};

#endif