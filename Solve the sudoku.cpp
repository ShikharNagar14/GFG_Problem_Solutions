class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isValid(int row,int col,int grid[N][N],int p){
        for(int i=0;i<9;i++){
            if(grid[row][i]==p){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(grid[i][col]==p){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==p){
                return false;
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(grid[i][j]==0){
                    for(int p=1;p<=9;p++){
                      if(isValid(i,j,grid,p)){
                          grid[i][j]=p;
                          if(SolveSudoku(grid))
                          {return true;
                          }
                          grid[i][j]=0;
                }
            }return false;
         }
    }
         }return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<grid[i][j]<<" ";
            }
        }
        
       
    }
};
