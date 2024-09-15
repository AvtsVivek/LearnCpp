#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

void print(auto view)
{
    for (auto i : view)
    { // Computation happens here.
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{

    std::vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // std::ranges::filter_view
    std::cout << std::endl;
    std::cout << "std::ranges::filter_view : " << std::endl;
    auto evens = [](int i)
    {
        return (i % 2) == 0;
    };
    std::cout << "vi : ";
    print(vi);
    std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens); // No computation
    std::cout << "vi evens : ";
    print(v_evens); // Computation happens in the print function
    // Print evens on the fly
    std::cout << "vi evens : ";
    print(std::ranges::filter_view(vi, evens));
    // Print odds on the fly
    std::cout << "vi odds : ";
    print(std::ranges::filter_view(vi, [](int i)
                                   { return (i % 2) != 0; }));

    std::cout << "vi : ";
    print(vi);

    // std::ranges::transform_view
    std::cout << std::endl;
    std::cout << "std::ranges::transform_view : " << std::endl;
    std::ranges::transform_view v_transformed = std::ranges::transform_view(vi, [](int i)
                                                                            { return i * 10; });
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi transformed : ";
    print(v_transformed);
    std::cout << "vi : ";
    print(vi);

    std::cout << "The following is what you get when you pass in a predicate to a transform_view" << std::endl;
    std::ranges::transform_view v_transformed_evens = std::ranges::transform_view(vi, evens);
    print(v_transformed_evens);

    // std::ranges::take_view
    std::cout << std::endl;
    std::cout << "std::ranges::take_view : " << std::endl;
    std::ranges::take_view v_taken = std::ranges::take_view(vi, 5);
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi taken : ";
    print(v_taken);

    // is met
    std::cout << std::endl;
    std::cout << "std::views::take_while. Takes numbers untill a given predicate is statisfied. " << std::endl;
    std::cout << "In the following, numbers are taken Till you get 2. " << std::endl;
    vi = {1, 11, 23, 131, 2, 3, 4, 5, 6, 7, 8, 9};
    std::ranges::take_while_view v_taken_while = std::ranges::take_while_view(vi, [](int i)
                                                                              { return (i % 2) != 0; });
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi taken_while : ";
    print(v_taken_while);

    // std::ranges::drop_view : drop n first elements
    std::cout << std::endl;
    std::cout << "std::ranges::drop_view. Drops the first 5 numbers " << std::endl;
    vi = {1, 11, 23, 131, 2, 3, 4, 5, 6, 7, 8, 9};
    std::ranges::drop_view v_drop = std::ranges::drop_view(vi, 5);
    std::cout << "vi : ";
    print(vi);
    std::cout << "vi_drop : ";
    print(v_drop);

    // std::views::drop_while_view : drops elements as long as the predicate is met
    std::cout << std::endl;
    std::cout << "std::views::drop_while_view : drops elements as long as the predicate is met" << std::endl;
    std::cout << "In the following, the view drops untill you see an even number." << std::endl;
    vi = {1, 11, 23, 4, 2, 3, 4, 5, 6, 7, 8, 9};
    std::ranges::drop_while_view v_drop_while = std::ranges::drop_while_view(vi, [](int i)
                                                                             { return (i % 2) != 0; });
    std::cout << "vi : ";
    print(vi);
    std::cout << "v_drop_while : ";
    print(v_drop_while);

    std::cout << "----------------" << std::endl;

    return 0;
}