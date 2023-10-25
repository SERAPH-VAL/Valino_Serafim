#include <queue>

bool is_can_exit_from_maze(const std::vector<std::string>& maze, int row, int col) {
    const int rows = maze.size();
    const int cols = maze[0].size();
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    std::queue<std::pair<int, int>> q;
    q.push({row, col});
    visited[row][col] = true;
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        if (maze[r][c] == 'E') {
            return true;
        }
        // Проверяем соседние клетки
        if (r > 0 && maze[r - 1][c] != '#' && !visited[r - 1][c]) {
            q.push({r - 1, c});
            visited[r - 1][c] = true;
        }
        if (r < rows - 1 && maze[r + 1][c] != '#' && !visited[r + 1][c]) {
            q.push({r + 1, c});
            visited[r + 1][c] = true;
        }
        if (c > 0 && maze[r][c - 1] != '#' && !visited[r][c - 1]) {
            q.push({r, c - 1});
            visited[r][c - 1] = true;
        }
        if (c < cols - 1 && maze[r][c + 1] != '#' && !visited[r][c + 1]) {
            q.push({r, c + 1});
            visited[r][c + 1] = true;
        }
    }
    return false;
}