//Electrical Engineering at Sharif University of Technology -1400
//BP - Semester 1 - 14001
//by Hasan Shahbazi

#include <iostream>

using namespace std;


int main() {
    int n, first_bit, res = 0, res2 = 0;
    cin >> n >> first_bit;

    int twoes = 0;
    for (int i = 1; i < n; i++){
        int bit;
        cin >> bit;
        switch(first_bit) {
        case 0:
            if (bit == 1) {
                first_bit = 1;
                res += 1;
            }
//            cout << "First: " << first_bit << "\t" << "Bit: " << bit << "\t" << "res: " << res << endl;
            break;
        case 1:
            if (bit == 0) {
                first_bit = 0;
            }
//            cout << "First: " << first_bit << "\t" << "Bit: " << bit << "\t" << "res: " << res << endl;
            break;
        case 2:
            if (bit == 0) {
                first_bit = 0;
            }
//            cout << "2 : First: " << first_bit << "\t" << "Bit: " << bit << "\t" << "res: " << res << endl;
            break;
        }

        if(bit == 2){
            int t = twoes * 2;
            res = min(t + 2, res);
        }

    }

    res += (first_bit == 0 ? 1 : 0);
    int t = twoes * 2;
    res = min(t + 2, res);
    cout << res;




    return 0;

}
