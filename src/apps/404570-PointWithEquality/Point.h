struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
    ~Point(){
    }
    //We only overload and default operator== in C++ 20
    //The compiler will use that to generate operator!= for us

    bool operator==(const Point& other) const = default;
    double m_x{};
    double m_y{};
};