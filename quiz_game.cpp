#include <iostream>

int main(){
    int score=0;

    std::string questions[]={"What's my favourite dog breed?", "What's my favourite cuisine?", "What's my favourite sport?", "What's my favourite team in that sport?"};
    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    std::string answers[]={"Golden Retriever", "Italian", "F1", "Red Bull"};
    int numberOfAnswers = sizeof(answers)/sizeof(answers[0]);

    std::string inputs[numberOfQuestions];
    int numberOfInputs = sizeof(inputs)/sizeof(inputs[0]);

    for (int i = 0; i < numberOfQuestions; i++)
    {
            std::cout << "Question number " << i+1 << ":"<< std::endl;
            std::cout << questions[i] << std::endl;
            std::cout << "Answer: " <<std::flush;
            std::getline(std::cin, inputs[i]);
            std::cout << "\n";
    }
    std::cout << "*****Results*****" << std::endl;;
    for (int i = 0; i < numberOfAnswers; i++)
    {
        std::cout << "Question " << i+1 << ": " << questions[i] << std::endl;
        std::cout << "Your input: " <<inputs[i] << std::endl;
        std::cout << "The answer: " << answers[i] <<std::endl;
        std::cout << "\n";
        if(inputs[i]==answers[i]){
            score+=1;
        }
    }

    std::cout << "Your final score was: " << score << "/" <<numberOfAnswers << std::endl;  
    return 0;
}