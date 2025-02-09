 #include"stack.h"
 #include<iostream>
 usingnamespace std;
 voidstack::push(char x)
 {
 top++;
 arr[top] = x;
 }
 charstack::pop()
 {
 return arr[top--];
 }
 voidstack::display(inty)
 {
 cout<<"***************************************************" <<endl;
 cout<<"|||"<<y+ 1 <<" ------> ";
 for(inti= 0; i<= top; i++)
 cout<<arr[i] <<" ";
 cout<<endl;
 }
