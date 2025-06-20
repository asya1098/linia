#include<iostream>
#include<ctime>
#include<string>    

int main()
{ 
    srand(time(NULL)); 
    setlocale(LC_ALL,"ru");
    char symbol;
    int *height = {new int};
    int *width = {new int};
    std::string random;
    int *limit = {new int};

    std::cout << "Linia - это программа которая выводит на экран геометрические фигуры с заданным символом.\n\n"; 
    std::cout << "Какой использовать символ: ";
    std::cin >> symbol;
    error:
    std::cout << "Сделать произвольную фигуру?(высота и ширина будут подобраны случайным образром): ";
    std::cin >> random;
    if(random == "да" || random == "yes"){
        std::cout << "Введите лимит символов: ";
        std::cin >> *limit; 
        *height = 1 + rand() % *limit;
        *width = 1 + rand() % *limit;
        goto linkRandom;
    }else if(random == "нет" || random == "no"){
        std::cout << "Хорошо" << std::endl;
    }else{
        std::cout << "Неправильный Ввод.Введите да или нет" << std::endl; 
        goto error;
    }

    std::cout << "Введите высоту: ";
    std::cin >> *height;
    std::cout << "Введите ширину: ";
    std::cin >> *width;

    linkRandom:
    for(int i = 1; i < *height; i++)
    {
        for(int a = 0; a < *width; a++){
            std::cout << symbol;
        }          
        std::cout << symbol << std::endl;
    }
}
