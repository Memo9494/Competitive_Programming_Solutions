#include <map>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    map<string, int> mapOfWordCount = { { "aaa", 10 }, { "ddd", 41 },
            { "bbb", 62 }, { "ccc", 13 } };

    typedef function<bool(pair<string, int>, pair<string, int>)> Comparator;

    Comparator compFunctor =
            [](std::pair<std::string, int> elem1 ,std::pair<std::string, int> elem2)
            {
                return elem1.second < elem2.second;
            };
    set<pair<string, int>, Comparator> setOfWords(
            mapOfWordCount.begin(), mapOfWordCount.end(), compFunctor);

    for (pair<string, int> element : setOfWords)
        cout << element.first << " :: " << element.second << endl;

    return 0;
}