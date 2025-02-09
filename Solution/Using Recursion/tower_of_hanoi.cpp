 #include<iostream>
 usingnamespace std;
 #include"tower_of_hanoi.h"
 voidtower_of_hanoi:: hanoi(intring, charFristTower, charThirdTower, char SecondTower)
 {
 if(ring== 1)
 {
 cout<<"Move the ring number "<<ring<<" from " <<FristTower<<" to "<<ThirdTower <<endl;
 }
 else
 {
 hanoi(ring-1, FristTower, SecondTower, ThirdTower);
 cout<<"Move the ring number "<<ring<<" from " <<FristTower<<" to "<<ThirdTower <<endl;
 hanoi(ring-1, SecondTower, ThirdTower, FristTower);
 }
 }
