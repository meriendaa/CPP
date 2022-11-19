#include <iostream>
#include <fstream>
#include <string>

void replace_word(std::string &buf, int pos, int len, std::string s2)
{
    buf = buf.substr(0, pos) + s2 + buf.substr(pos + len);
}

int main (int argc, char **argv)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (argc < 4 || s1.empty() || s2.empty())
    {
        std::cout << "error numero de args" << std::endl;
        return(1);
    }

    std::ifstream fichero(argv[1]);
    std::ofstream ficheroRep(std::string(argv[1]) + ".replace");
    if (!fichero.is_open() || !ficheroRep.is_open())
    {
        std::cout << "Error al abrir" << std::endl;
        return(1);
    }

    std::string buf;
    size_t pos = 0;
    int len  = 0;
    len = s1.length();
    while(std::getline(fichero, buf)){
        pos = buf.find(s1);
        while(pos != std::string::npos)
        {
            replace_word(buf, pos, len, s2);
            pos = buf.find(s1, pos + s2.length());
        }
        ficheroRep << buf << "\n";
    }
    fichero.close();
    ficheroRep.close();
    return (0);
}