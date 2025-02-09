 #include<iostream>
 #include"stack.h"
 using namespace std;
 void movements(int ring, int FristTower, int ThirdTower, int SecondTower);
 void Graphical();
 stack t[3];
 void main()
 {
 char Ring[27] = " ABCDEFGHIJKLMNOPQRSTVWXYZ";
 int number;
 cout << "please enter the number of disks : ";
 cin >> number;cout << endl;
 for (int i = number; i > 0; i--)
 {
 t[0].push(Ring[i]);
 }
 cout << "------Before making the moves------" << endl << endl;
 Graphical();
 cout << "------while making movements------" << endl << endl;
 movements(number, 1, 3, 2);
 cout << "------After making the moves------" << endl << endl;
 Graphical();
 }
 void movements(int ring, int FristTower, int ThirdTower, int SecondTower)
 {
 if (ring == 1)
 {
 cout << "Move the ring from " << FristTower << " to " << ThirdTower << endl;
 t[ThirdTower- 1].push(t[FristTower- 1].pop());
 Graphical();
 }
 else
 {
 movements(ring- 1, FristTower, SecondTower, ThirdTower);
 cout << "Move the ring from " << FristTower << " to " << ThirdTower << endl;
 t[ThirdTower- 1].push(t[FristTower- 1].pop());
 Graphical();
 movements(ring- 1, SecondTower, ThirdTower, FristTower);
 }
 }
 void Graphical()
 {
 for (int i = 0; i < 3; i++)
 t[i].display(i);
 cout << "***************************************************" << endl << endl;
 }
