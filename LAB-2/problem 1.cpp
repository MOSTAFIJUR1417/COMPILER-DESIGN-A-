#include <iostream>
#include <string>
using namespace std;

bool isNumericConstant(string input)
{
    bool check= true;
    for(int i=0; i<input.size(); i++)
    {
        if(input[i]=='0' || input[i]=='1'|| input[i]=='2'|| input[i]=='3'|| input[i]=='4'|| input[i]=='5'|| input[i]=='6'|| input[i]=='7'|| input[i]=='8'||input[i]=='9' && check ==true)
        {
            check= true;
        }
        else
        {
            check= false;
            break;
        }
    }
    return check;
}

int main() {
    string input;
    cout << "Enter a value: ";
    cin>> input;

    if (isNumericConstant(input)) {
        cout << "It is Numeric constant" << endl;
    } else {
        cout << "It is Not numeric" << endl;
    }

    return 0;
}
