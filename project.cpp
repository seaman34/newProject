#include <iostream>

void finish();
// test branch
int main(){
    std::cout << "some code..." << std::endl;
    finish();
    return 0;
}

void finish(){
    char answer;
    std::cout << "finish program? [y/n] ";
    std::cin >> answer;
    switch(answer)
    {
        case 'y':
            break;
        case 'n':
            std::cout << "-------------------" << std::endl << std::endl; 
            main();
            break;
        default:
            std::cerr << "invalid answer" <<std::endl;
            std::cout << "-------------------" << std::endl << std::endl; 
            finish();
            break;
    }
};

