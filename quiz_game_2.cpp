#include <iostream>

int main()
{
    std::string questions[] = {"Which team won the F1 championship last year?",
                               "How many F1 teams are there?",
                               "Which F1 team has it's primary colour as Papaya?",
                               "Which F1 team has won the most total races?"};
    int sizeOfQuestions = sizeof(questions) / sizeof(questions[0]);

    std::string options[][4] = {{"A) Red Bull", "B) Mercedes", "C) Ferrari", "D) Williams"},
                                {"A) 8", "B) 12", "C) 10", "D) 20"},
                                {"A) Red Bull", "B) Haas", "C) Aston Martin", "D) Mclaren"},
                                {"A) Williams", "B) Ferrari", "C) Mercedes", "D) Renault"}};
    int sizeOfOptionsRows = sizeof(options) / sizeof(options[0][0]);
    int sizeOfOptionsColumns = sizeof(options[0]) / sizeof(options[0][0]);

    std::string answers[] = {"A", "C", "D", "B"};

    std::string inputs[sizeOfQuestions];

    int score = 0;

    for (int i = 0; i < sizeOfQuestions; i++)
    {
        std::cout << "Question " << i + 1 << ":" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "Choices: " << std::endl;
            for (int j = 0; j < sizeOfOptionsColumns; j++)
            {
                std::cout << options[i][j] << ", " << std::flush;
            }
        std::cout << "\n";
        std::cout << "Enter guess: " << std::flush;
        std::getline(std::cin, inputs[i]);
        std::cout << "\n";
    }
    for (int i = 0; i < sizeOfQuestions; i++)
    {
        if (inputs[i] == answers[i])
        {
            score += 1;
        }
    }
    std::cout << "*****Results*****" << std::endl;
    std::cout << "You got " << score << "/" << sizeOfQuestions << std::endl;
    std::cout << "\n";
    std::cout << "Question breakdown" << std::endl;

    for (int i = 0; i < sizeOfQuestions; i++)
    {
        std::cout << "Question " << i + 1 << ": " << questions[i] << std::endl;
        std::cout << "Your answer: " << inputs[i] << std::endl;
        std::cout << "Correct answer: " << answers[i] << std::endl;
        inputs[i] == answers[i] ? std::cout << "Correct!" << std::endl : std::cout << "Incorrect" << std::endl;
        std::cout << "\n";
    }

    return 0;
}