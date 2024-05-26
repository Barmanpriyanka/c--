#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insertAtEnd(vector<int> &arr, int element) {
    arr.push_back(element);
    cout << "Element inserted at the end." << endl;
}

void insertAtPosition(vector<int> &arr, int position, int element) {
    arr.insert(arr.begin() + position, element);
    cout << "Element " << element << " inserted at position " << position << "." << endl;
}

void deleteByValue(vector<int> &arr, int value) {
    auto it = find(arr.begin(), arr.end(), value);
    if (it != arr.end()) {
        arr.erase(it);
        cout << "Element " << value << " deleted." << endl;
    } else {
        cout << "Element " << value << " not found in the array." << endl;
    }
}

void deleteByPosition(vector<int> &arr, int position) {
    if (position >= 0 && position < arr.size()) {
        arr.erase(arr.begin() + position);
        cout << "Element deleted from position " << position << "." << endl;
    } else {
        cout << "Invalid position " << position << "." << endl;
    }
}

void findElementLocation(const vector<int> &arr, int element) {
    auto it = find(arr.begin(), arr.end(), element);
    if (it != arr.end()) {
        int position = distance(arr.begin(), it);
        cout << "Element " << element << " found at position " << position << "." << endl;
    } else {
        cout << "Element " << element << " not found in the array." << endl;
    }
}

void displayElements(const vector<int> &arr) {
    cout << "Elements in the array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;
}

int main() {
    vector<int> array;
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Insert at end" << endl;
        cout << "2. Insert at position" << endl;
        cout << "3. Delete by value" << endl;
        cout << "4. Delete by position" << endl;
        cout << "5. Find element location" << endl;
        cout << "6. Display elements" << endl;
        cout << "7. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter the element to insert: ";
                cin >> element;
                insertAtEnd(array, element);
                break;
            }
            case 2: {
                int position, element;
                cout << "Enter the position to insert at: ";
                cin >> position;
                cout << "Enter the element to insert: ";
                cin >> element;
                insertAtPosition(array, position, element);
                break;
            }
            case 3: {
                int value;
                cout << "Enter the value to delete: ";
                cin >> value;
                deleteByValue(array, value);
                break;
            }
            case 4: {
                int position;
                cout << "Enter the position to delete from: ";
                cin >> position;
                deleteByPosition(array, position);
                break;
            }
            case 5: {
                int element;
                cout << "Enter the element to find: ";
                cin >> element;
                findElementLocation(array, element);
                break;
            }
            case 6:
                displayElements(array);
                break;
            case 7:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
