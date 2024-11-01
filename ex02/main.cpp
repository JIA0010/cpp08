#include "MutantStack.hpp"

// int main()
// {
// MutantStack<int> mstack;

// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }



void testList() {
    std::list<int> myList;

    // 要素を追加
    myList.push_back(5);
    myList.push_back(17);
    myList.push_back(3);
    myList.push_back(8);

    // list のイテレーターを使って要素を表示
    std::cout << "List contents:" << std::endl;
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // const_iteratorを使っても同じ結果が得られる
    std::cout << "List contents (const_iterator):" << std::endl;
    for (std::list<int>::const_iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // reverse_iteratorを使っても逆順で表示される
    std::cout << "List contents (reverse_iterator):" << std::endl;
    for (std::list<int>::reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it) {
        std::cout << *it << std::endl;
    }

    // const_reverse_iteratorを使っても同じ結果が得られる
    std::cout << "List contents (const_reverse_iterator):" << std::endl;
    for (std::list<int>::const_reverse_iterator it = myList.rbegin(); it != myList.rend(); ++it) {
        std::cout << *it << std::endl;
    }
}


void testMutantStack() {
    MutantStack<int> mstack;
    
    // 要素を追加
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(8);
    
    // 要素を表示
    std::cout << "MutantStack contents:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << std::endl;}

    // const_iteratorを使っても同じ結果が得られる
    std::cout << "MutantStack contents(const_iterator):" << std::endl;
    for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << std::endl;}

    // reverse_iteratorを使っても逆順で表示される
    std::cout << "MutantStack contents(reverse_iterator):" << std::endl;
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) {
        std::cout << *it << std::endl;}

    // const_reverse_iteratorを使っても同じ結果が得られる
    std::cout << "MutantStack contents(const_reverse_iterator):" << std::endl;
    for (MutantStack<int>::const_reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it) {
        std::cout << *it << std::endl;}
}

int main() {
    std::cout << "----------------testMutant----------------" << std::endl;
    testMutantStack();
    std::cout << "----------------testList----------------" << std::endl;
    testList();
    return 0;
}
