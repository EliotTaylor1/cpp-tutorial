#include <iostream>

int main(){



    std::string players[][3] = {{"Russell", "Farrel", "Smith"},
                               {"Dunn", "Coles", "Sinkler"},
                               {"May", "Daly", "Watson"}};

    int rows=sizeof(players)/sizeof(players[0]);
    int columns=sizeof(players[0])/sizeof(players[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << players[i][j] << " " <<std::flush;
        }
        std::cout << " " <<std::endl;
    }
    
    return 0;
}