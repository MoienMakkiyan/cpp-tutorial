//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Niko Moradi

#include <iostream>

using namespace std;

void cinarray(string array[], int n);

void coutarray(string array[], int n);

int main() {
    int n, k = 0;
    cin >> n;
    string names[n];
    cinarray(names, n);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n-i-1; j++) {
            if (tolower(names[j][k]) > tolower(names[j+1][k]))
                swap(names[j], names[j+1]);
            else if (names[j][k] - names[j+1][k] == 32)
                swap(names[j], names[j+1]);
            else if (names[j][k] == names[j+1][k])
                while (true) {
                    k++;
                        if (k > 4)
                            break;
                        else if (tolower(names[j][k]) > tolower(names[j+1][k])) {
                            swap(names[j], names[j+1]);
                            break;
                        }else if(tolower(names[j+1][k]>names[j][k]))
                            break;
                        else if (names[j][k] - names[j+1][k] == 32) {
                            swap(names[j], names[j+1]);
                            break;
                        }
                        else if(names[j+1][k]-names[j][k]==32)
                            break;
                    }
                    k = 0;
                }
            coutarray(names, n);
            return 0;
        }

    void cinarray(string array[], int n) {
        for (int i = 0; i < n; i++)
            cin >> array[i];
    }

    void coutarray(string array[], int n) {
        for (int i = 0; i < n; i++) {
            cout << array[i];
            if (i < n - 1)
                cout << " ";
        }
    }