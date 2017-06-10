#include "MinoA.h" 
char A_arr [2][4][4] = {{{'0','0','0','0'}, 
                         {'0','0','0','0'},
                         {'0','0','0','0'},
                         {'0','0','0','0'}}, 
                        {{'1','1','1','1'},
                         {'1','1','1','1'},
                         {'1','1','1','1'},
                         {'1','1','1','1'}} }; 
MinoA::MinoA():Mino(2){}
void MinoA::paint() 
{  
   for(int i=0;i<4;++i)
   { 
      for(int j=0;j<4;++j)
        cout << A_arr[rotate_index][i][j]; 
      cout << endl;
   } 
} 
