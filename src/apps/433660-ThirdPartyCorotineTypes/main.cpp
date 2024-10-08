#include <iostream>
#include <coroutine>
#include <cassert>
#include "unique_generator.h"

/*
template <typename T>
struct generator {
    struct promise_type {
        T m_value;
        generator get_return_object() { return generator(this); }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept{ return {}; }

        void unhandled_exception() noexcept
        {
            std::rethrow_exception(std::current_exception());
        }
        std::suspend_always yield_value(T val) {
            m_value = val;
            return {};
        }

        void return_void() {
            std::cout << "Returning void..." << std::endl;
        }


    };
    generator(promise_type* p)
         : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
    ~generator()
     {
         std::cout << "Handle destroyed..." << std::endl;
          m_handle.destroy();
     }

    T operator()() {
        assert(m_handle != nullptr);
        m_handle.resume();
        return (m_handle.promise().m_value);
    }
    std::coroutine_handle<promise_type>   m_handle;
};
*/

unique_generator<int> generate_numbers()
{
    std::cout << "generate_numbers starting" << std::endl;
    co_yield 10; // Return 10 and pause
    std::cout << "After stop point #1" << std::endl;

    co_yield 20;
    std::cout << "After stop point #2" << std::endl;

    co_yield 30;
    std::cout << "After stop point #3" << std::endl;
    std::cout << "generate_numbers ending" << std::endl;
}

unique_generator<int> infinite_number_stream(int start = 0)
{
    auto value = start;
    for (int i = 0;; ++i)
    {
        // std::cout << "In infinite_number stream..." << std::endl;
        co_yield value;
        ++value;
    }
}

unique_generator<int> range(int first, int last)
{
    while (first != last)
    {
        co_yield first++;
    }
}

int main()
{

    auto task1 = generate_numbers();

    for (auto i = task1.begin(); i != task1.end(); ++i)
    {
        std::cout << "value : " << *i << std::endl;
    }

    // std::cout << "value : " << task1() << std::endl; // This will crash. So comment this out.

    auto task2 = infinite_number_stream();
    for (size_t i{};; ++i)
    {
        std::cout << "value : " << task2() << std::endl;

        if (i > 30)
            break; // Just to put a break
    }

    std::cout << "Range......................." << std::endl;
    std::cout << "Range......................." << std::endl;

    // Range
    auto task3 = range(0, 25);
    /*
    for(size_t i{}; i < 26; ++i ){
        std::cout << "value[" << i << "] : " << task3() << std::endl;
    }
    */

    for (auto v : task3)
    {
        std::cout << "value : " << v << std::endl;
    }

    std::cout << "Done!" << std::endl;

    return 0;
}