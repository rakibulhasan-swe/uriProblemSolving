#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream file1("text1.txt", ios::binary);
     ofstream file2("text2.txt", ios::binary);
      file2 << file1.rdbuf();




    return 0;
}
