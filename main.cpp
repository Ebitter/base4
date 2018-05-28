#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{

    std::vector<int> src;
    for(int i=1; i<101; i++)
    {
        src.push_back(i);
    }
    for(int i=0; i< src.size(); i++)
        std::cout << "old: "<< src[i] << std::endl;


    src.erase(src.begin()+91, src.end());
    for(int i=0; i< src.size(); i++)
        std::cout << "erase last 9:" << src[i] << std::endl;
}
