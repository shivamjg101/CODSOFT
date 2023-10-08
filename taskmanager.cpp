#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

int main() {
    std::vector<Task> tasks;

    while (true) {
        std::cout << "1. Add task\n2. View tasks\n3. Mark task as completed\n4. Remove task\n5. Exit\n";
        int option;
        std::cin >> option;

        if (option == 1) {
            std::cin.ignore();
            std::string description;
            std::cout << "Enter task description: ";
            std::getline(std::cin, description);
            tasks.push_back({description, false});
        } else if (option == 2) {
            for (int i = 0; i < tasks.size(); i++) {
                std::cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") << "\n";
            }
        } else if (option == 3) {
            int taskNumber;
            std::cout << "Enter task number to mark as completed: ";
            std::cin >> taskNumber;
            tasks[taskNumber - 1].completed = true;
        } else if (option == 4) {
            int taskNumber;
            std::cout << "Enter task number to remove: ";
            std::cin >> taskNumber;
            tasks.erase(tasks.begin() + taskNumber - 1);
        } else if (option == 5) {
            break;
        }
    }

    return 0;
}
