
#include "task.h"
#include <iostream>

int main() {
    Task myTask;

    int choice;
    do {
        std::cout << "Choose an action:\n";
        std::cout << "1. Add a task\n";
        std::cout << "2. Delete a task\n";
        std::cout << "3. Edit a task\n";
        std::cout << "4. Search task by title\n";
        std::cout << "5. Search task by priority\n";
        std::cout << "6. Search task by description\n";
        std::cout << "7. Search task by date and time\n";
        std::cout << "0. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            myTask.addTask();
            break;
        case 2:
            myTask.deleteTask();
            break;
        case 3:
            myTask.editTask();
            break;
        case 4: {
            char searchTitle[100];
            std::cout << "Enter title to search: ";
            std::cin.ignore();
            std::cin.getline(searchTitle, sizeof(searchTitle));
            myTask.searchTaskByTitle(searchTitle);
            break;
        }
        case 5: {
            int searchPriority;
            std::cout << "Enter priority to search: ";
            std::cin >> searchPriority;
            myTask.searchTaskByPriority(searchPriority);
            break;
        }
        case 6: {
            char searchDescription[200];
            std::cout << "Enter description to search: ";
            std::cin.ignore();
            std::cin.getline(searchDescription, sizeof(searchDescription));
            myTask.searchTaskByDescription(searchDescription);
            break;
        }
        case 7: {
            int searchDay, searchMonth, searchYear, searchHour, searchMinute;
            std::cout << "Enter date and time to search (day month year hour minute): ";
            std::cin >> searchDay >> searchMonth >> searchYear >> searchHour >> searchMinute;
            myTask.searchTaskByDateTime(searchDay, searchMonth, searchYear, searchHour, searchMinute);
            break;
        }
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
