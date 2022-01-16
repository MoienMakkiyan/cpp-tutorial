//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Mohammadmahdi Hasanbeiki

#include<iostream>
using namespace std;
void MainMergeSort();
void Mergingarray(int i_Left,int i_Right,int i_EOA);//EOA is abreviation of (end of array) .
void inputStringtointArray();
void Split();
void COPY_ARRAY();

int main_string[100];
int on_work[100];
int num = 100;

int main()
{
    inputStringtointArray();

    MainMergeSort();

    for(int i=0;i<num;i++)
    {
        cout<<main_string[i]<<" ";
    }

    return 0;
}
void inputStringtointArray()
{
    string first_str;
    getline(cin, first_str);

    int length = first_str.length(), space_Counter = 1;

    if (first_str[length - 1] != ' ')
    {
        first_str += " ";
        length++;
    }

    for (int i = 0; i < length - 1; i++)
    {
        if (first_str[i] == ' ')
        {
            space_Counter++;
        }
    }
    num = space_Counter;

    int adadcounter = 0, digits = 0;
    short int ifnegative = 1;
    for (int i = 0; i < first_str.length(); i++)
    {
        if (first_str[i] != ' ')
        {
            if (first_str[i] == '-') {
                ifnegative = -1;
            }
            else
            {
                    digits = 10 * digits + (int)(first_str[i] - '0');
            }
        }
        else
        {
            digits *= ifnegative;
            ifnegative = 1;
            main_string[adadcounter] = digits;
            on_work[adadcounter] = main_string[adadcounter++];
            digits = 0;
            continue;
        }
    }
    cout << endl;
}
void MainMergeSort()
{
    for (int WOCL = 1; WOCL < num; WOCL = 2 * WOCL)/* WOCL is abreviation of (width of comparision list) and is number of arrays that will be sorted at first width is 1 that comparision is
    binary and we compare arrays width which is next to it; then width will be twice of former value of it that is 2, in this step we compare
    4 close arrays gradually, and so on . */
    {
        for (int i = 0; i < num; i = i + 2 * WOCL)//at first we sort the list main_string with comparision between one array to array to that is next to it.
        {
            Mergingarray( i, min(i+WOCL, num), min(i+2*WOCL, num));/* i is iLeft; first min is iRight; second min is iEnd . */

        }
        COPY_ARRAY();//is for copying list on_work to list main_string .
    }
}
void Mergingarray(int i_Left,int i_Right,int i_EOA)/* i_Left is index of first array we put it in initializing of next loop and i_Right
is index of array that is next to array with index i_Left and i_EOA is index of last array we put it in finalizing of next loop . */
{
    int i = i_Left, j = i_Right;
    for (int k = i_Left; k < i_EOA; k++)
        {
            if (i < i_Right && (j >= i_EOA || main_string[i] <= main_string[j]))/* first condition comes for if tow close arrays is sorted; doesn't enter this if and go to else.
            second condition that is ((or condition)) comes for if we get the end of the current loop or if tow close arrays is sorted this if plays . */
            {
                on_work[k] = main_string[i];
                i = i + 1;
            }
            else
            {
                on_work[k] = main_string[j];
                j = j + 1;
            }
        }
}
void COPY_ARRAY()//is for copying list on_work to list main_string .
{
    for (int i = 0; i < num; i++)
        main_string[i] = on_work[i];
}


