/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "app.h"

int main(int argc, char **argv)
{
    std::cout << "--- LOX ---" << std::endl;
    Lox::Application app(argc, argv);
    return app.Run();
}

Lox::Application::Application(const int numberOfArgs, char **args) {
    this->numberOfArgs = numberOfArgs;
    this->args = args;
}

int Lox::Application::Run() {
    if(this->numberOfArgs == 1) {
        this->RunPrompt();
    }
    return -1;
}

int Lox::Application::RunPrompt() {
    std::string input;
    for(;;)
    {
        std::cout << "> ";
        std::getline(std::cin, input, '\n');
        if(input == "") {
            break;
        }
        this->scanner.scanLine(input);
    }
    
    return 0;
}