#include <iostream>
using namespace std;

class Circle
{
// �⺻�� ���ߴ°� ��Ģ. public �� ��������� public�� �����.
private:
    // mutable ���� const�� ����� ����Լ��ȿ��� �ʵ��� ���� ������ �� �ִ�
    double radius;
public:
    //Circle();
    Circle(double r) {
        radius = r;
        cout << this << "��ü ������(�Ű����� ������)!\n";
    } // �Ű����� �����ڸ� ����� �⺻ �����ڵ� ������ �Ѵ�.
    double getRadius() const {
        int a = 9;
        //radius = 5.0;  // const member function
        return radius;
    }
    double getArea() const {
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        const double PI = 3.14;
        return (2 * PI * radius);
    }
    void setRadius(double value) {
        radius = value;
    }
};

int main()
{
    cout << "Circle 3" << endl;
    Circle circle3(5.0); // assigne stack memory
    circle3.setRadius(7.0);
    //circle3.radius = 7.0;
    cout << circle3.getArea() << '\n';

    Circle* circle4 = new Circle(30.0); // free heap memory
    cout << circle4->getArea() << '\n';
    delete circle4; // heap memory�� delete ���������� �޸� ���� �߻�!

    cout << "Circle 1" << endl;
    Circle circle1(5.0); //assigne stack memory
    circle1.setRadius(10.0);
    cout << "������: " << circle1.getRadius() << endl;
    cout << "����: " << circle1.getArea() << endl;
    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2(10.0); //assigne stack memory
    circle2.setRadius(20.0);
    cout << "������: " << circle2.getRadius() << endl;
    cout << "����: " << circle2.getArea() << endl;
    cout << "�ѷ�: " << circle2.getPerimeter();
    return 0;
    
    //main �Լ����� ������� �͵��� main �Լ��� ������ ������ �޸𸮿��� �����.
}