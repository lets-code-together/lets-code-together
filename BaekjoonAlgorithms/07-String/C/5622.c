/*다이얼*/
#include <iostream>
#include <string>
 
using namespace std;
 
int main(void) 
{
    int sec[10] = {11,2,3,4,5,6,7,8,9,10};
    string input;
    int totalSec = 0;
    cin >> input;
 
    for(int i=0; i<input.length(); i++) 
    {
        switch(input.at(i)) 
	{
            case 'A':
            case 'B':
            case 'C':
                totalSec += sec[2];
                break;
            case 'D':
            case 'E':
            case 'F':
                totalSec += sec[3];
                break;
            case 'G':
            case 'H':
            case 'I':
                totalSec += sec[4];
                break;
            case 'J':
            case 'K':
            case 'L':
                totalSec += sec[5];
                break;
            case 'M':
            case 'N':
            case 'O':
                totalSec += sec[6];
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                totalSec += sec[7];
                break;
            case 'T':
            case 'U':
            case 'V':
                totalSec += sec[8];
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                totalSec += sec[9];
                break;
        }
    }
 
    cout << totalSec << "\n";
 
    return 0;

}
