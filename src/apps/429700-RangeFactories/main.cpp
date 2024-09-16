#include <iostream>
#include <ranges>
#include <string_view>
#include <iomanip>
#include <string>
#include <tuple>
using namespace std::literals;

int main()
{
    std::cout << "repeat example -----------" << std::endl;
    // bounded overload
    for (auto s : std::views::repeat("C++"sv, 3))
        std::cout << s << ' ';
    std::cout << '\n';

    // unbounded overload
    for (auto s : std::views::repeat("I know that you know that"sv) | std::views::take(3))
        std::cout << s << ' ';
    std::cout << "...\n";

    std::cout << "iota example -----------" << std::endl;

    // Generate an infinite sequence of numbers
    // auto infinite_view = std::views::iota(1) | std::views::take(20); // Stores the compuation
    // auto data_view = std::views::take( std::views::iota(1) , 20);

    // Numbers are generated lazily, on the fly, as we need them in each iteration
    for (auto i : std::views::iota(1) | std::views::take(20))
    {
        std::cout << i << " "; // std::endl;
    }
    std::cout << " " << std::endl;

    std::cout << "empty example -----------" << std::endl;

    namespace ranges = std::ranges;
    std::cout << std::boolalpha;
    ranges::empty_view<long> e;
    static_assert(ranges::empty(e)); // uses operator bool
    std::cout << "ranges::empty(e): " << ranges::empty(e) << std::endl;
    static_assert(0 == e.size());
    std::cout << "e.size(): " << e.size() << std::endl;
    static_assert(nullptr == e.data());
    std::cout << "e.data(): " << e.data() << std::endl;
    static_assert(nullptr == e.begin());
    std::cout << "e.begin(): " << e.begin() << std::endl;
    static_assert(nullptr == e.end());
    std::cout << "e.end(): " << e.end() << std::endl;
    static_assert(nullptr == e.cbegin());
    static_assert(nullptr == e.cend());

    // The following two are giving compiler errors.cbegin and cend.
    // std::cout << "e.cbegin(): " << e.cbegin() << std::endl;
    // std::cout << "e.cend(): " << e.cend() << std::endl;

    std::cout << "single view example -----------" << std::endl;
    //I am not very clear what this is yet. Need to look into this single view once again. 
    // Produces a view that contains exactly one element of a specified value.
    // The expression views::single(e) is expression-equivalent to single_view<std::decay_t<decltype((e))>>(e) for any suitable subexpression e.
    constexpr std::ranges::single_view sv1{3.1415}; // uses (const T&) constructor
    static_assert(sv1);
    static_assert(not sv1.empty());

    std::cout << "1) *sv1.data(): " << *sv1.data() << '\n'
              << "2) *sv1.begin(): " << *sv1.begin() << '\n'
              << "3)  sv1.size(): " << sv1.size() << '\n'
              << "4)  distance: " << std::distance(sv1.begin(), sv1.end()) << '\n';

    std::string str{"C++20"};
    std::cout << "5)  str = " << std::quoted(str) << '\n';
    std::ranges::single_view sv2{std::move(str)}; // uses (T&&) constructor
    std::cout << "6) *sv2.data(): " << std::quoted(*sv2.data()) << '\n'
              << "7)  str = " << std::quoted(str) << '\n';

    std::ranges::single_view<std::tuple<int, double, std::string>>
        sv3{std::in_place, 42, 3.14, "😄"}; // uses (std::in_place_t, Args&&... args)

    std::cout << "8)  sv3 holds a tuple: { "
              << std::get<0>(sv3[0]) << ", "
              << std::get<1>(sv3[0]) << ", "
              << std::get<2>(sv3[0]) << " }\n";
}
