#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Player class
class Player {
public:
    int x, y;   // Player's position
    int score;  // Player's score

    Player() : x(0), y(0), score(0) {} // Constructor to initialize player

    void move(char direction, int mazeWidth, int mazeHeight) {
        switch (direction) {
        case 'w': if (y > 0) y--; break;                  // Move up
        case 's': if (y < mazeHeight - 1) y++; break;     // Move down
        case 'a': if (x > 0) x--; break;                  // Move left
        case 'd': if (x < mazeWidth - 1) x++; break;      // Move right
        default: cout << "Invalid input!" << endl; break;
        }
    }
};

// Function for each challenge
void challengeBasicLoops(Player& player) {
    cout << "\n** Challenge: Basic Loops **" << endl;
    cout << "Solve this: What is the output of this code snippet?\n";
    cout << "for (int i = 1; i <= 3; i++) cout << i; \n";
    cout << "a) 123   b) 012   c) Error   d) Undefined behavior" << endl;
    char answer;
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'a'.\n";
    }
}

void challengePointers(Player& player) {
    cout << "\n** Challenge: Pointers **" << endl;
    cout << "What does this code output?\n";
    cout << "int x = 5; int* p = &x; cout << *p;" << endl;
    cout << "a) Memory address   b) 5   c) Undefined   d) Error" << endl;
    char answer;
    cin >> answer;
    if (answer == 'b' || answer == 'B') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'b'.\n";
    }
}

void challengeClasses(Player& player) {
    cout << "\n** Challenge: Classes and Objects **" << endl;
    cout << "What is the main feature of classes in C++?\n";
    cout << "a) Encapsulation   b) Recursion   c) Templates   d) None of the above" << endl;
    char answer;
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'a'.\n";
    }
}

void challengeInheritance(Player& player) {
    cout << "\n** Challenge: Inheritance **" << endl;
    cout << "What does inheritance achieve?\n";
    cout << "a) Code reusability   b) Memory management   c) Pointers   d) None of the above" << endl;
    char answer;
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'a'.\n";
    }
}

void challengeSTL(Player& player) {
    cout << "\n** Challenge: Standard Template Library (STL) **" << endl;
    cout << "Which STL container uses key-value pairs?\n";
    cout << "a) vector   b) map   c) array   d) stack" << endl;
    char answer;
    cin >> answer;
    if (answer == 'b' || answer == 'B') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'b'.\n";
    }
}

void challengeTemplates(Player& player) {
    cout << "\n** Challenge: Templates **" << endl;
    cout << "Templates are used for:\n";
    cout << "a) Code flexibility   b) Memory optimization   c) Runtime execution   d) None of the above" << endl;
    char answer;
    cin >> answer;
    if (answer == 'a' || answer == 'A') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'a'.\n";
    }
}

void challengeRecursion(Player& player) {
    cout << "\n** Challenge: Recursion **" << endl;
    cout << "Which of the following is TRUE about recursion?\n";
    cout << "a) It's an iterative process\n";
    cout << "b) It requires a base condition to prevent infinite calls\n";
    cout << "c) Recursion always optimizes memory usage\n";
    cout << "d) None of the above" << endl;
    char answer;
    cin >> answer;
    if (answer == 'b' || answer == 'B') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'b'.\n";
    }
}

void challengeExceptionHandling(Player& player) {
    cout << "\n** Challenge: Exception Handling **" << endl;
    cout << "Which keyword is used to handle exceptions?\n";
    cout << "a) throw   b) catch   c) try   d) All of the above" << endl;
    char answer;
    cin >> answer;
    if (answer == 'd' || answer == 'D') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'd'.\n";
    }
}

void challengePolymorphism(Player& player) {
    cout << "\n** Challenge: Polymorphism **" << endl;
    cout << "Which type of polymorphism occurs at compile time?\n";
    cout << "a) Virtual functions   b) Function overloading   c) Operator overloading   d) Both b and c" << endl;
    char answer;
    cin >> answer;
    if (answer == 'd' || answer == 'D') {
        cout << "Correct! You earn 10 points.\n";
        player.score += 10;
    } else {
        cout << "Wrong! The correct answer is 'd'.\n";
    }
}

// Function to randomly pick and execute a challenge
void randomChallenge(Player& player) {
    srand((unsigned)time(0));
    int challengeType = rand() % 10; // 10 challenges
    switch (challengeType) {
    case 0: challengeBasicLoops(player); break;
    case 1: challengePointers(player); break;
    case 2: challengeClasses(player); break;
    case 3: challengeInheritance(player); break;
    case 4: challengeSTL(player); break;
    case 5: challengeTemplates(player); break;
    case 6: challengeRecursion(player); break;
    case 7: challengeExceptionHandling(player); break;
    case 8: challengePolymorphism(player); break;
    case 9: challengeBasicLoops(player); break; // Repeat one to keep it dynamic
    }
}

// Display the maze
void displayMaze(int width, int height, Player& player) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == player.y && j == player.x) {
                cout << "P "; // Player position
            } else {
                cout << ". "; // Open space
            }
        }
        cout << endl;
    }
}

int main() {
    const int mazeWidth = 25;
    const int mazeHeight = 25;
    Player player;

    cout << "Welcome to the Enhanced C++ Adventure Game!" << endl;
    cout << "Navigate the maze using 'W', 'A', 'S', 'D' keys.\n";
    cout << "Solve challenges along the way to earn points.\n";

    char input;
    while (true) {
        displayMaze(mazeWidth, mazeHeight, player);
        cout << "Your score: " << player.score << endl;
        cout << "Move (w/a/s/d): ";
        cin >> input;

        player.move(input, mazeWidth, mazeHeight);

        // Trigger a challenge when the player moves
        if (rand() % 2 == 0) { // Randomly trigger challenges
            randomChallenge(player);
        }

        // Exit condition
        if (player.x == mazeWidth - 1 && player.y == mazeHeight - 1) {
            cout << "Congratulations! You've reached the goal.\n";
        
        }
    }
}

