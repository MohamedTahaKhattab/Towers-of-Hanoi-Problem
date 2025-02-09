 #include<iostream>
 #include"tower_of_hanoi.h"
 usingnamespace std;
 voidmain()
 {
 intn;
 charfirst, second, third;
 tower_of_hanoit;
 cout<<"please enter the number of rings : "; cin>>n;
 cout<<endl<<"please enter the name of first tower : "; cin>>first;
 cout<<endl<<"please enter the name of second tower : "; cin>>second;
 cout<<endl<<"please enter the name of third tower : "; cin>>third;
 cout<<endl<<"---------------movements---------------"<<endl;
 t.hanoi(n, first, third, second);
 }
