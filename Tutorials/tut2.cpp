#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int i=0;i<100;i++){
        int admin = rand()%10;
        int choice = rand()%3;

        cout<<"INSERT INTO Verification VALUES("<<i+1<<", "<<admin+1<<", ";
        for(int i=0;i<3;i++){
            if(choice == i){
                cout<<"true, ";
            }
            else{
                cout<<"false, ";
            }
        }

        cout<<");"<<endl;
        
    }
    return 0;
}

INSERT INTO Verification VALUES(1, 8, false, true, false );
INSERT INTO Verification VALUES(2, 4, false, false, true );
INSERT INTO Verification VALUES(3, 1, false, false, true );
INSERT INTO Verification VALUES(4, 5, false, false, true );
INSERT INTO Verification VALUES(5, 4, false, true, false );
INSERT INTO Verification VALUES(6, 1, false, false, true );
INSERT INTO Verification VALUES(7, 3, false, false, true );
INSERT INTO Verification VALUES(8, 8, false, false, true );
INSERT INTO Verification VALUES(9, 8, false, true, false );
INSERT INTO Verification VALUES(10, 1, false, true, false );
INSERT INTO Verification VALUES(11, 4, false, true, false );
INSERT INTO Verification VALUES(12, 10, false, false, true );
INSERT INTO Verification VALUES(13, 1, true, false, false );
INSERT INTO Verification VALUES(14, 10, true, false, false );
INSERT INTO Verification VALUES(15, 7, false, true, false );
INSERT INTO Verification VALUES(16, 8, false, false, true );
INSERT INTO Verification VALUES(17, 3, false, true, false );
INSERT INTO Verification VALUES(18, 1, true, false, false );
INSERT INTO Verification VALUES(19, 10, false, true, false );
INSERT INTO Verification VALUES(20, 10, true, false, false );
INSERT INTO Verification VALUES(21, 8, false, false, true );
INSERT INTO Verification VALUES(22, 4, true, false, false );
INSERT INTO Verification VALUES(23, 6, false, false, true );
INSERT INTO Verification VALUES(24, 9, false, true, false );
INSERT INTO Verification VALUES(25, 5, false, true, false );
INSERT INTO Verification VALUES(26, 2, false, false, true );
INSERT INTO Verification VALUES(27, 9, false, true, false );
INSERT INTO Verification VALUES(28, 9, false, false, true );
INSERT INTO Verification VALUES(29, 5, false, false, true );
INSERT INTO Verification VALUES(30, 1, false, true, false );
INSERT INTO Verification VALUES(31, 3, false, true, false );
INSERT INTO Verification VALUES(32, 10, false, false, true );
INSERT INTO Verification VALUES(33, 2, false, true, false );
INSERT INTO Verification VALUES(34, 8, true, false, false );
INSERT INTO Verification VALUES(35, 9, false, true, false );
INSERT INTO Verification VALUES(36, 9, false, true, false );
INSERT INTO Verification VALUES(37, 6, false, true, false );
INSERT INTO Verification VALUES(38, 6, false, true, false );
INSERT INTO Verification VALUES(39, 4, true, false, false );
INSERT INTO Verification VALUES(40, 6, false, false, true );
INSERT INTO Verification VALUES(41, 6, false, true, false );
INSERT INTO Verification VALUES(42, 10, false, true, false );
INSERT INTO Verification VALUES(43, 8, false, false, true );
INSERT INTO Verification VALUES(44, 6, false, false, true );
INSERT INTO Verification VALUES(45, 2, true, false, false );
INSERT INTO Verification VALUES(46, 9, false, false, true );
INSERT INTO Verification VALUES(47, 6, false, true, false );
INSERT INTO Verification VALUES(48, 3, false, false, true );
INSERT INTO Verification VALUES(49, 7, true, false, false );
INSERT INTO Verification VALUES(50, 9, true, false, false );
INSERT INTO Verification VALUES(51, 2, true, false, false );
INSERT INTO Verification VALUES(52, 2, false, false, true );
INSERT INTO Verification VALUES(53, 8, false, false, true );
INSERT INTO Verification VALUES(54, 8, true, false, false );
INSERT INTO Verification VALUES(55, 5, true, false, false );
INSERT INTO Verification VALUES(56, 10, false, false, true );
INSERT INTO Verification VALUES(57, 6, true, false, false );
INSERT INTO Verification VALUES(58, 6, false, false, true );
INSERT INTO Verification VALUES(59, 3, false, true, false );
INSERT INTO Verification VALUES(60, 9, false, false, true );
INSERT INTO Verification VALUES(61, 1, false, true, false );
INSERT INTO Verification VALUES(62, 5, false, true, false );
INSERT INTO Verification VALUES(63, 6, true, false, false );
INSERT INTO Verification VALUES(64, 4, false, true, false );
INSERT INTO Verification VALUES(65, 7, true, false, false );
INSERT INTO Verification VALUES(66, 3, false, true, false );
INSERT INTO Verification VALUES(67, 3, false, true, false );
INSERT INTO Verification VALUES(68, 8, true, false, false );
INSERT INTO Verification VALUES(69, 6, false, true, false );
INSERT INTO Verification VALUES(70, 2, false, false, true );
INSERT INTO Verification VALUES(71, 1, true, false, false );
INSERT INTO Verification VALUES(72, 9, true, false, false );
INSERT INTO Verification VALUES(73, 7, false, false, true );
INSERT INTO Verification VALUES(74, 1, false, true, false );
INSERT INTO Verification VALUES(75, 6, false, true, false );
INSERT INTO Verification VALUES(76, 3, false, true, false );
INSERT INTO Verification VALUES(77, 6, true, false, false );
INSERT INTO Verification VALUES(78, 5, false, false, true );
INSERT INTO Verification VALUES(79, 10, false, false, true );
INSERT INTO Verification VALUES(80, 6, true, false, false );
INSERT INTO Verification VALUES(81, 4, false, false, true );
INSERT INTO Verification VALUES(82, 4, false, false, true );
INSERT INTO Verification VALUES(83, 9, false, true, false );
INSERT INTO Verification VALUES(84, 1, false, false, true );
INSERT INTO Verification VALUES(85, 7, false, true, false );
INSERT INTO Verification VALUES(86, 7, true, false, false );
INSERT INTO Verification VALUES(87, 4, true, false, false );
INSERT INTO Verification VALUES(88, 5, false, true, false );
INSERT INTO Verification VALUES(89, 1, true, false, false );
INSERT INTO Verification VALUES(90, 4, true, false, false );
INSERT INTO Verification VALUES(91, 6, false, true, false );
INSERT INTO Verification VALUES(92, 3, true, false, false );
INSERT INTO Verification VALUES(93, 8, true, false, false );
INSERT INTO Verification VALUES(94, 7, false, true, false );
INSERT INTO Verification VALUES(95, 4, false, true, false );
INSERT INTO Verification VALUES(96, 5, false, false, true );
INSERT INTO Verification VALUES(97, 6, true, false, false );
INSERT INTO Verification VALUES(98, 6, false, false, true );
INSERT INTO Verification VALUES(99, 3, false, false, true );
INSERT INTO Verification VALUES(100, 10, true, false, false );