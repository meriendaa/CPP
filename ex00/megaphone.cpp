#include <iostream>

int main(int argc, char **args)
{   
    int i = 1;
    int no_inp = 1;
    while(args[i])
    {
        if(!args[i][0])
            no_inp = 0;
        i++;
    }
    if (argc < 2 || !no_inp)
        std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";
    for (int i = 1; args[i]; i++)
    {
       for (int j = 0; args[i][j]; j++)
       {
        std::cout << (char)std::toupper(args[i][j]);
       }
    }
    std::cout << std::endl;
    return (0);
}