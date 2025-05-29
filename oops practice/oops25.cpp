#include <iostream>
using namespace std;

class Book {
private:
    string name;
    string genre;
    int price;  // Moved price to private

public:
    void setData(string name1, string genre1, int price1) {
        name = name1;
        genre = genre1;
        price = price1;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Price: " << price << endl;
    }

    void input() {
        cout << "Enter book name: ";
        cin.ignore(); // To clear any newline characters in the input buffer
        getline(cin, name);
        cout << "Enter book genre: ";
        getline(cin, genre);
        cout << "Enter book price: ";
        cin.ignore();
        cin >> price;
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the newline character left in the buffer
    }
};

int main() {
    Book b1;
    b1.input();
    b1.display();
    return 0;
}
