#include <iostream>
#include <utility>
#include <vector>
#include <string>

void bubbleSort(std::vector<std::pair<int, char>> &cards, int N)
{
    bool flag = true;
    int i = 0;
    while (flag)
    {
        flag = false;
        for (int j = N - 1; j >= i + 1; j--)
        {
            if (cards[j].first < cards[j - 1].first)
            {
                std::swap(cards[j], cards[j - 1]);
                flag = true;
            }
        }
    }
}
void selectionSort(std::vector<std::pair<int, char>> &cards, int N)
{
    for (int i = 0; i < N; i++)
    {
        int minj = i;
        for (int j = i; j < N; j++)
        {
            if (cards[j].first < cards[minj].first){
                minj = j;
            }
        }
        std::swap(cards[i],cards[minj]);
    }
}

int main()
{
    int N;
    std::cin >> N;

    std::vector<std::pair<int, char>> cards(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> cards[i].first >> cards[i].second;
    }

    std::cout << "手札" << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << cards[i].first << " : " << cards[i].second << std::endl;
    }

    std::cout << "bubble sort : Stable" << std::endl;
    auto cards_bubble = cards;
    bubbleSort(cards_bubble, N);
    for (int i = 0; i < N; i++)
    {
        std::cout << cards_bubble[i].first << " : " << cards_bubble[i].second << std::endl;
    }

    std::cout << "selection sort : Not Stable" << std::endl;
    auto cards_selection = cards;
    selectionSort(cards_selection, N);
    for (int i = 0; i < N; i++)
    {
        std::cout << cards_selection[i].first << " : " << cards_selection[i].second << std::endl;
    }

    

}
