#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>


struct Person
{
    char name[50];
    int age;
    bool married;
};

int main()
{
    FILE* file;

    //file = fopen("file.txt", "w");

    //if (!file)
    //    return -1;

    //char ch = fgetc(file);
    //char* buffer = new char[1024];
    //fgets(buffer, strlen(buffer), file);

    /*char str[] = "Hello world";
    char str2[] = "Hello people";

    for (int i = 0; i < strlen(str); i++)
        fputc(str[i], file);
    fputc('\n', file);
    fputs(str2, file);

    fclose(file);*/

//    file = fopen("file.txt", "r");
    /*char ch;
    while (!feof(file))
    {
        ch = fgetc(file);
        if (ch == '\n') break;
        std::cout << ch;
    }
    char* buffer = new char[1024];
    fgets(buffer, strlen(buffer), file);
    std::cout << "\n" << buffer << "\n";*/

    /*char* buffer = new char[1024];
    while (!feof(file))
    {
        fgets(buffer, sizeof buffer, file);
        std::cout << buffer;
    }
    fclose(file);*/




    // binary file

    /*file = fopen("file.dat", "wb");

    int n = 100500;
    fwrite(&n, sizeof n, 1, file);

    fclose(file);

    file = fopen("file.dat", "rb");

    int m;
    fread(&m, sizeof m, 1, file);
    std::cout << m;

    fclose(file);*/

    /*file = fopen("file.dat", "wb");

    int array[] = { 1, 2, 3, 4, 5, 6 };
    fwrite(array, sizeof array[0], 6, file);

    fclose(file);

    file = fopen("file.dat", "rb");
    int* rarr = new int[10] {};
    fread(rarr, sizeof(int), 3, file);

    for (int i = 0; i < 10; i++)
    {
        std::cout << rarr[i] << " ";
    }
    fclose(file);*/

    /*char path[] = "D:/file.dat";

    file = fopen(path, "w");

    Person person;
    strcpy(person.name, "Billy");
    person.age = 45;
    person.married = true;

    fwrite(&person, sizeof(Person), 1, file);

    fclose(file);

    

    file = fopen(path, "r");
    
    Person billy;
    fread(&billy, sizeof(Person), 1, file);
    std::cout << billy.name << "\n";
    std::cout << billy.age << "\n";
    std::cout << billy.married << "\n";


    fclose(file);*/



    
    file = fopen("file.txt", "r");

    char buffer[20];

    fseek(file, 20, SEEK_SET);
    char ch = fgetc(file);
    
    std::cout << ftell(file) << "\n";

    fgets(buffer, sizeof buffer, file);



    std::cout << buffer;

    fclose(file);

    return 0;

}
