#include <iostream>

bool isSubsequence(std::string str1, std::string str2, int x, int y)
{
   
    if (x == 0)
    {
        return true;
    }
    if (y == 0)
    {
        return false;
    }
    if (str1[x - 1] == str2[y - 1])
    {
        return isSubsequence(str1, str2, x - 1, y - 1);
    }
   
    return isSubsequence(str1, str2, x, y - 1);
}



int main()
{
	std::string str1 ;
	std::string str2;
    std::cin >> str1 >> str2;
    int x = str1.size();
    int y = str2.size();
    isSubsequence(str1, str2, x, y) ? std::cout << "YES" : std::cout << "NO";
	return 0;
}
