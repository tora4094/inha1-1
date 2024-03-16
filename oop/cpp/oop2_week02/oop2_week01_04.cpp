#include <iostream>
using namespace std;

class Circle
{
// 기본은 감추는게 원칙. public 을 써줘야지만 public이 적용됨.
private:
    // mutable 사용시 const로 선언된 멤버함수안에서 필드의 값을 수정할 수 있다
    double radius;
public:
    //Circle();
    Circle(double r) {
        radius = r;
        cout << this << "객체 생성됨(매개변수 생성자)!\n";
    } // 매개변수 생성자를 만들면 기본 생성자도 만들어야 한다.
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
    delete circle4; // heap memory를 delete 하지않으면 메모리 누수 발생!

    cout << "Circle 1" << endl;
    Circle circle1(5.0); //assigne stack memory
    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2(10.0); //assigne stack memory
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter();
    return 0;
    
    //main 함수에서 만들어진 것들은 main 함수가 끝나는 시점에 메모리에서 사라짐.
}