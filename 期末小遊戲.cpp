#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int x;     // �]�w��J
int y;     // �]�w�K�X 
int low=1,high=500;     // �]�w�K�X�d��G1��500 
int i=0;     // �]�w�p�ƾ� 
srand(time(NULL));     // ���@�Ӯɶ���ơA�_�h�K�X�H���ȷ|�ۦP 
y=rand()%high+low;     // �K�X�H���d�򬰳̰��ȻP�̧C�Ȥ��� 
do{     // �� do �j�� 
cout << "�п�J " << low << " �� " << high << " ���� ==> ";
cin >> x;
if (x>high || x<low){     // �]�w��J�ȥ����b�̰��ȻP�̧C�Ȥ��� 
cout << "��J�d����~!" << endl; 
continue;
}
i++;     // �p�ƾ� 
if (x==y){
cout << "�����o!�o�]�o�]�o�j�]!" << endl;
break;
} else if (i==10) {     // �]�w���D���Ƴ̦h10�� 
cout << "�W�L���D���ơA�ФU���A��!" << endl;
cout << "���T���׬� " << y << endl;     // �i�����T����
break;
} else {
cout << "�����!�Ѿl���D����: " << 10-i << " ��" << endl; 
(x>y)?high=x-1:low=x+1;     // �T���B�� 
}
} while (x!=y);
system("pause");
return 0;
}
