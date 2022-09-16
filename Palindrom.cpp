#include <iostream>
#include <string>

bool check_palindrome (std::string&);
void sort (std::string&);
void make_small (std::string&);

int main()
{
    std::string text;
    do
    {
        std::cout << "type the text you want to check\n";
        getline(std::cin,text);
        std::cout << std::boolalpha << check_palindrome (text) << std::endl;
        std::cout << "Permutations: " << text << std::endl;
    } while (text != " ");

    return 0;
}

bool check_palindrome (std::string& str)
{
    make_small (str);
    sort (str);
    bool t = true;
    for (int i = 0, j = str.size() - 1; i <= j; ++i, --j)
    {
        while (str[i] == ' ')
        {
            ++i;
        }
        while (str[j] == ' ')
        {
            --j;
        }
        if (str[i] != str[j])
        {
            t = false;
            break;
        }
    }
    return t;
}
void make_small (std::string& str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 65 && str[i] <= 91)
        {
            str[i] += 32;
        }
    }
}
void sort (std::string& str)
{
    for (int i = 0, j = str.size() - 1; i <= str.size()/2; ++i, --j)
    {
        while (str[i] == ' ')
        {
            ++i;
        }
        while (str[j] == ' ')
        {
            --j;
        }
        if(str[i] != str[j])
        {
            for (int y = i + 1; y < j; ++y)
            {
                if (str[i] == str[y])
                {
                    std::swap(str[y],str[j]);
                    break;
                }
                else if (str[j] == str[y])
                {
                    std::swap(str[y],str[i]);
                }
            }
        }
    }
}