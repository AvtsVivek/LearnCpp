#include <iostream>

#include <string>

class SomethingIsWrong
{
public:
    SomethingIsWrong(const std::string &s) : m_message(s) {}
    ~SomethingIsWrong() {}
    std::string what() const { return m_message; }

protected:
    std::string m_message;
};

class Warning : public SomethingIsWrong
{
public:
    Warning(const std::string &s) : SomethingIsWrong(s) {}
    std::string what() const { return m_message + " Yellow"; }
};

class SmallError : public Warning
{
public:
    SmallError(const std::string &s) : Warning(s) {}
    std::string what() const { return m_message + " Orange"; }
};

class CriticalError : public SmallError
{
public:
    CriticalError(const std::string &s) : SmallError(s) {}
    std::string what() const { return m_message + " Red"; }
};

int main()
{
    try
    {
        throw SmallError("He didn't shave the beard");
    }
    catch (SomethingIsWrong &ex)
    {
        std::cout << "SomethingIsWrong Exception cought : " << ex.what() << std::endl;
    }
    catch (Warning &ex)
    {
        std::cout << "Warning Exception cought : " << ex.what() << std::endl;
    }
    catch (SmallError &ex)
    {
        std::cout << "SmallError Exception cought : " << ex.what() << std::endl;
    }
    catch (CriticalError &ex)
    {
        std::cout << "CriticalError Exception cought : " << ex.what() << std::endl;
    }
    return 0;
}