template <typename T>
T min(const T num1, const T num2)
{
    return num1 < num2 ? num1 : num2;
}

#define min(num1, num2) (num1 < num2 ? num1 : num2)

