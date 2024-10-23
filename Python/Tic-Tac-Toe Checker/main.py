def is_solved(board):
    white_win = ((board[0][0] == board[0][1] == board[0][2] == 1 or
                  board[1][0] == board[1][1] == board[1][2] == 1 or
                  board[2][0] == board[2][1] == board[2][2] == 1) 
                  or
                 (board[0][0] == board[1][0] == board[2][0] == 1 or
                  board[0][1] == board[1][1] == board[2][1] == 1 or
                  board[0][2] == board[1][2] == board[2][2] == 1)
                  or 
                 (board[0][0] == board[1][1] == board[2][2] == 1 or
                  board[0][2] == board[1][1] == board[2][2] == 1))
    
    black_win = ((board[0][0] == board[0][1] == board[0][2] == 2 or
                  board[1][0] == board[1][1] == board[1][2] == 2 or
                  board[2][0] == board[2][1] == board[2][2] == 2) 
                  or
                 (board[0][0] == board[1][0] == board[2][0] == 2 or
                  board[0][1] == board[1][1] == board[2][1] == 2 or
                  board[0][2] == board[1][2] == board[2][2] == 2)
                  or 
                 (board[0][0] == board[1][1] == board[2][2] == 2 or
                  board[0][2] == board[1][1] == board[2][2] == 2))
    zeros_amount = sum([row.count(0) for row in board])
    
    return 1 if white_win else (2 if black_win else (-1 if zeros_amount else 0))