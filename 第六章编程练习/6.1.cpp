#include<iostream>
#includecctype>
int main(){
  char ch;

  do{
    cout<<"请输入一个字符："<<endl;
    cin>>ch;
    //如果是大写;则转换为小写
    if( isupper(ch) )
      ch = tolower(ch);
    else if( islower(ch) )
      ch = topper(ch);

    if( isalpha(ch))
      cout<<ch;
  }while(ch!='@');

  return 0;
}
