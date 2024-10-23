#include <iostream>
#include <string>

using namespace std;

/*
.W.
.W.
...
*/

void print_matrix(bool** matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << matrix[row][col];
        }

        cout << endl;
    }
}

int shortest_way(bool** maze, int rows, int cols, int row, int col) {

}


int path_finder(string maze_str) {
    int i = 0;
    for (; i < maze_str.length(); i++) {
        if (maze_str[i] == '\n') {
            break;
        }
    }

    int cols = i;
    int rows = 1;

    for (; i < maze_str.length(); i++) {
        if (maze_str[i] == '\n') {
            rows++;
        }
    }

    bool** maze = new bool* [rows];
    for (int row = 0; row < rows; row++) {
        maze[row] = new bool[cols];
        for (int col = 0; col < cols; col++) {
            maze[row][col] = (maze_str[row * cols + col + (row * cols + col) / cols] == 'W') ? false : true;
        }
    }

    print_matrix(maze, rows, cols);

    return -1;
}


int main() {
    path_finder(".W.\n.W.\n...");

    return 0;
}