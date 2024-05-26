#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct TASK
{
    bool complete;
    string description;
};

void showOption()
{
    cout<< "To do list Manager " <<endl;
    cout<< "1 for Add task" <<endl;
    cout<< "2 for View task" <<endl;
    cout<< "3 for Mark task" <<endl;
    cout<< "4 for Remove task" <<endl;
    cout<< "Enter choice: ";
}

void AddTask(vector<TASK> & task)
{
    TASK newTask;
    cout<< "Enter description of task: " <<endl;
    cin.ignore();
    getline(cin, newTask.description);
    newTask.complete = false;
    task.push_back(newTask);
    cout<< "New task is added" <<endl;
}

void ViewTask(const vector<TASK> & task)
{
    if(task.empty())
    {
        cout<< "There is no task" <<endl;
    }
    else {
        for (size_t i=0; i< task.size(); ++i)
        {
            cout<< i+1 << "." << task[i].description << "[" << (task[i].complete ? "Completed" : "Pending") << "]" <<endl;
        }
    }
}

void MarkTask(vector<TASK> & task)
{
    if(task.empty())
    {
        cout<< "No task is there to mark complete" <<endl;
    }
    else{
        int index;
        cout<< "Enter task number: ";
        cin>> index;

        if(index >0 && index <=task.size())
        {
            task[index-1].complete= true;
            cout<< "Task " << index<< " is marked as complete." <<endl;
        }
        else{
            cout<< "Task number is invalid." <<endl;
        }
    }
}

void RemoveTask(vector<TASK>& task) 
{
    if (task.empty()) 
    {
        cout << "No tasks to remove." <<endl;
    } 
    else {
        int index;
        cout << "Enter the task number to remove: ";
        cin >> index;
        if (index > 0 && index <= task.size()) 
        {
            task.erase(task.begin() + index - 1);
            cout << "Task removed." <<endl;
        } 
        else {
            cout << "Invalid task number." <<endl;
        }
    }
}

int main() 
{
    vector<TASK> task;
    int choice;

    while (true) {
        showOption();
        std::cin >> choice;

        switch (choice) {
            case 1:
                AddTask(task);
                break;
            case 2:
                ViewTask(task);
                break;
            case 3:
                MarkTask(task);
                break;
            case 4:
                RemoveTask(task);
                break;
            case 5:
                cout << "Exiting."<<endl;
                return 0;
            default:
                cout << "Invalid choice. Try again."<<endl;
                break;
        }
    }
}