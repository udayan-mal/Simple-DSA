#include <iostream> // For input/output (cout)
#include <vector>
#include <string>

using namespace std;

/**
 * @class Solution
 * @brief Implements the N-Queens problem using backtracking.
 */
class Solution {
private:
    // This will store all found solutions
    vector<vector<string>> solutions;
    
    // These vectors will track which columns and diagonals are under attack
    // We use vectors of bools for simple true/false tracking
    vector<bool> cols;
    vector<bool> diag1; // Tracks diagonals where (row + col) is constant
    vector<bool> diag2; // Tracks diagonals where (row - col) is constant
    
    // Size of the board (n)
    int n_size;

    /**
     * @brief The core backtracking function.
     * @param row The current row we are trying to place a queen in.
     * @param board The current state of the chessboard.
     */
    void backtrack(int row, vector<string>& board) {
        // --- Base Case ---
        // If we have successfully placed a queen in every row (0 to n-1),
        // we have found a valid solution.
        if (row == n_size) {
            solutions.push_back(board);
            return;
        }

        // --- Recursive Step ---
        // Try placing a queen in every column (col) for the current (row).
        for (int col = 0; col < n_size; ++col) {
            
            // Calculate diagonal indices
            // All cells on the same '/' diagonal have a constant (row + col)
            int d1_index = row + col;
            // All cells on the same '\' diagonal have a constant (row - col)
            // We add (n_size - 1) to ensure the index is always non-negative.
            int d2_index = row - col + n_size - 1;

            // --- Check if the position is safe ---
            if (cols[col] || diag1[d1_index] || diag2[d2_index]) {
                // This position (row, col) is under attack, so we skip it
                // and try the next column.
                continue;
            }

            // --- 1. Place the Queen ---
            // Mark the current position and its corresponding
            // column and diagonals as occupied.
            board[row][col] = 'Q';
            cols[col] = true;
            diag1[d1_index] = true;
            diag2[d2_index] = true;

            // --- 2. Recurse ---
            // Move to the next row.
            backtrack(row + 1, board);

            // --- 3. Backtrack ---
            // This is the crucial step. After the recursion returns (either
            // from a dead end or a found solution), we "undo" our choice.
            // This allows the 'for' loop to try placing the queen in the
            // *next* column for the current row.
            board[row][col] = '.';
            cols[col] = false;
            diag1[d1_index] = false;
            diag2[d2_index] = false;
        }
    }

public:
    /**
     * @brief Solves the N-Queens problem for a given n.
     * @param n The size of the n x n chessboard.
     * @return A vector of vectors of strings, where each inner vector 
     * of strings represents a distinct board solution.
     */
    vector<vector<string>> solveNQueens(int n) {
        // Store 'n' for easy access in the helper function
        n_size = n;
        
        // Clear the solutions vector in case this object is reused
        solutions.clear();

        // Initialize the helper vectors with 'false'
        cols.assign(n, false);
        diag1.assign(2 * n - 1, false); // (row+col) can range from 0 to 2*(n-1)
        diag2.assign(2 * n - 1, false); // (row-col) can range from -(n-1) to (n-1)

        // Create an empty n x n board, initialized with '.'
        vector<string> board(n, string(n, '.'));

        // Start the backtracking process from the first row (row 0)
        backtrack(0, board);

        return solutions;
    }
};

/**
 * @brief Main function to run the N-Queens solver and print results.
 */
int main() {
    // --- Set the board size ---
    int n = 10; // Change this value to solve for different n (e.g., 1, 8, 9)

    // --- Create a Solution object ---
    Solution solver;
    
    // --- Get the solutions ---
    vector<vector<string>> allSolutions = solver.solveNQueens(n);

    // --- Print the results ---
    cout << "Found " << allSolutions.size() << " distinct solutions for n = " << n << ":" << endl;
    cout << "------------------------------------" << endl;

    // Iterate through each solution
    for (int i = 0; i < allSolutions.size(); ++i) {
        cout << "Solution " << (i + 1) << ":" << endl;
        
        // Iterate through each row of the board
        for (const string& row : allSolutions[i]) {
            cout << row << endl;
        }
        cout << endl; // Add a newline for spacing between solutions
    }

    // Example with n=1
    n = 1;
    allSolutions = solver.solveNQueens(n);
    cout << "Found " << allSolutions.size() << " distinct solutions for n = " << n << ":" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < allSolutions.size(); ++i) {
        cout << "Solution " << (i + 1) << ":" << endl;
        for (const string& row : allSolutions[i]) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0; // Indicate successful execution
}