#include <iostream>

class person {
public:
    person();
    person(std::string name, int age) {
        m_name = name;
        m_age = age;
    };
    std::string m_name;
    int m_age;
    void printInfo() {
        std::cout << "m_name:" << m_name << std::endl;
        std::cout << "m_age:" << m_age << std::endl;
    };
};


int main()
{
    int n = 1;
    int* p = &n;
    int arr[5] = { 1,2,3,4,5 };
    //指针使用  
    std::cout << "p is " << p << std::endl;
    std::cout << "p value is " << *p << std::endl;
    
    //通过下标访问数组
    std::cout << "arr[2] value is " << arr[2] << std::endl;
    //通过指针访问数组
    int* Parr = arr;
    std::cout << "arr is " << arr << std::endl;
    std::cout << "Parr is " << Parr << std::endl;
    //通过数组指针修改元素值
    *(Parr + 1) = 3;
    std::cout << "*(Parr + 1) value is " << *(Parr + 1) << std::endl;
    std::cout << "-----------------------------" << std::endl;

    //person* p = new person;
    person* p1 = new person("lessions", 18);
    /* p1->m_name = "wuyijun";
     p1->m_age = 20;*/
    p1->printInfo();

    return 0;
}