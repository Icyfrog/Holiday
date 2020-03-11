// source：http://cxsjsxmooc.openjudge.cn/2020t1springall/032/

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    int matrix[5][5];
    int num = 0;  // return


    for(auto & i : matrix) {
        for(int & j : i) {
            cin >> j;
        }
    }


    int row_max[5]={};
    int list_num[5]={};
    for(int i=0; i<5; i++) {
        int tmp_max = matrix[i][0];
        row_max[i] = tmp_max;
        for(int j=0; j<5; j++) {
            if(row_max[i] <= matrix[i][j]) {
                row_max[i] = matrix[i][j];
                list_num[i] = j;
            }
        }
    }


    for(int i=0; i<5; i++) {
        bool flag = true;
        for(int j=0; j<5; j++) {
            if(row_max[i] > matrix[j][list_num[i]]) {
                flag = false;
            }
        }
        if(flag) {
            cout << i+1 <<' '<< list_num[i]+1 <<' '<< row_max[i];
            return 0;
        }

    }

    cout << "not found";
    return 0;
}
