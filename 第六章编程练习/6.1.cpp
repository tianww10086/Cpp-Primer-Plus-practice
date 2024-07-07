#include<iostream>
#include<cctype>
using namespace std;
int main() {
    char ch;
    cout << "请输入一个字符：" << endl;
    do {
        
        cin >> ch;
        //如果是大写;则转换为小写
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))   
            ch = toupper(ch);

        if (isalpha(ch))
            cout << ch;
    } while (ch != '@');

    return 0;
}
