#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    char str[100];
    int i,totChar;
totChar=0;
    cout<<"Please enter the string for count characters\n";
    gets(str);
//count characters of a string wit out space
i=0;
    while(str[i] != '\0'){
        if(str[i]!=' ')// this condition is used to avoid counting space
        {
            totChar++;
        }
         i++;
    }
    cout<<"The total characters of the given string= "<<totChar;
    getch();
    return 0;}
