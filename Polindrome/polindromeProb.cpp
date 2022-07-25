#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Polindrom (string str) {

    int C[str.length()][str.length()]; 

    for (int i = 0; i < str.length(); ++i)
    {
        C[i][i] = 1;
    }

    for (int i = 0; i < str.length(); ++i) 
    {
        for (int j = 0; j < str.length(); ++j)
        {
           if (i != j) 
            {
               if (str[i] == str[j])
               {
                    C[i][j] = C[i + 1][j - 1] + 2;
               }
                C[i][j] = max(C[i + 1][j], C[i][j - 1]);
            }
        }
    }
    return C[0][str.length() - 1];
}

bool IsPolindrom2 (string str)
{
    if(str.length() == 0 || str.length() == 1)
    {
        return 1;
    }
    if(str[0] != str[str.length()-1])
    {
        return false;
    }

    str = str.substr(1,str.length() - 2);

    return IsPolindrom2(str);
}


bool Polindrom (string n,int first,int last) 
{
    if(first == last || last < first) 
    {
        return true;
    }

    if(n[first] != n[last])
    {
        return false;
    }

    return Polindrom(n,first + 1,last -1);

}

int main()
{
   string str  = "madam";
   //cout<<Polindrom(str);
   //cout << IsPolindrom2(str);
   //cout<<Polindrom(str,1,7);

    return 0;
}
