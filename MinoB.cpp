#include "MinoB.h" 
char B_arr [2][4][4] = {{{'1','1','1','1'}, 
                         {'1','1','1','1'},
                         {'1','1','1','1'},
                         {'1','1','1','1'}}, 
                        {{'0','0','0','0'},
                         {'0','0','0','0'},
                         {'0','0','0','0'},
                         {'0','0','0','0'}} }; 
MinoB::MinoB():Mino(3){}
void MinoB::paint() 
{  
   for(int i=0;i<4;++i)
   { 
      for(int j=0;j<4;++j)
        cout << B_arr[rotate_index][i][j]; 
      cout << endl;
   } 
} 
