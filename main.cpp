//
// Created by Daniil Kolesnik on 18/05/2021.
//all rights and lefts reserved

#include <iostream>
#include "my_vector.h"
#include "my_vector.h"
#include<string>
#include <algorithm>

struct Cat{
public:
    const char* breed;
    Cat(const char* breed_): breed( breed_){}


//    friend bool operator<(Cat& first, Cat& second);
//    friend bool operator>(Cat& first, Cat& second);

};

//bool operator<(Cat& first, Cat& second){
//    return  first.breed < second.breed;
//    // if (breed < other.breed) return true;
//}
//bool operator>(Cat& first, Cat& second){
//    return  first.breed > second.breed;
//    // if (breed < other.breed) return true;
//}
//bool operator==(Cat& first, Cat& second){
//    return  first.breed == second.breed;
//    // if (breed < other.breed) return true;
//}



//1) at +
//2) [] +
//3) front +
//4) back +
//5) data +
//6) begin //implemented in insert and erase
//7) end //implemented in insert
//8) empty +
//9) size +
//10) reserve //implemented in insert
//11) capacity +
//12) clear +
//13) insert (вставка элемента) +
//14) erase (удаление по итератору , удаление
//диапазона по итераторам) ++
//15) push_back +
//16) pop_back +
//17) resize +
//18)swap +



int main() {



//
//    my_vector<int> test_insert;
//
//    test_insert.push_back(5);
//    test_insert.push_back(9);
//    test_insert.push_back(3);
//    test_insert.push_back(4);
//    test_insert.push_back(5);
//    test_insert.push_back(6);
//    test_insert.push_back(7);
//    test_insert.push_back(8);
//    test_insert.push_back(9);

//    std::cout << "Before: " << std::endl;
//    for (const auto& item : test_insert) {
//        std::cout << item << std::endl;
//    }
//    std::cout << "number of elements before: " << test_insert.get_n() << std::endl
//    << "capacity before: " << test_insert.get_capacity() << std::endl <<
//    "ext capacity before: " << test_insert.get_ext() << std::endl;
//
//    std::cout << "-------------------------" << std::endl;

  //  std::cout <<test_insert[666] << std::endl;




    // auto it = test_insert.erase(test_insert.begin() + 2);//  erase по итератору
    //auto it = test_insert.erase(test_insert.begin() + 2, test_insert.end());// erase по диапазону

//   test_insert.insert(test_insert.begin() + 2, 0);// insert по итератору
//   test_insert.insert(test_insert.begin() + 2, 0);// insert по итератору

//  test_insert.push_back(6);
//  test_insert.push_back(7);
//  test_insert.push_back(8);
//  test_insert.push_back(9);
//    std::cout << "After insert: " << std::endl;
//    for (const auto& item : test_insert) {
//        std::cout << item << std::endl;
//    }
//    std::cout << "number of elements after: " << test_insert.get_n() << std::endl
//    << "capacity after: " << test_insert.get_capacity() << std::endl << "ext capacity after : "<<
//     test_insert.get_ext() <<  std::endl;
//
//    std::cout << " last element is : " << test_insert.back() << std::endl;

//
//    std::cout << "number of elements after: " << test_insert.get_n() << std::endl
//    << " capacity after: " << test_insert.get_capacity() << std::endl;
//    // std::cout << "deleted: " << " ' " << *it << " ' " << std::endl;
//
//    std::cout << "-------------------------" << std::endl;
//    std::cout << "STL demonstration" << std::endl;
//    std::sort(test_insert.begin(), test_insert.end());
//    std::cout << "After sort: " << std::endl;
//    for (const auto& item : test_insert) {
//        std::cout << item << std::endl;
//    }
//    std::cout << "-------------------------" << std::endl;
//    std::reverse(test_insert.begin(), test_insert.end());
//    std::cout << "After reverse: " << std::endl;
//    for (const auto& item : test_insert) {
//        std::cout << item << std::endl;
//    }

    std::cout << "-------------------------" << std::endl;
    std::cout << "STL with struct demonstration" << std::endl;
    my_vector<Cat> cattery;

    cattery.push_back(Cat());
    cattery.push_back(Cat{"Siberian"});
    cattery.push_back(Cat{"Bengal"});
    cattery.push_back(Cat{"Savannah"});
    cattery.push_back(Cat("Bengaal"));
    cattery.push_back(Cat{"A"});
    Cat last = cattery.back();
    std::cout << last.breed;
    std::sort(cattery.begin(),cattery.end());

    std::sort(
            cattery.front(),
            cattery.back(),
            [] (Cat const & l, Cat const & r) {return *l.breed < *r.breed;}
            );
    std::cout << "After sort: " << std::endl;
    for (const auto& item : cattery) {
        std::cout << item.breed << std::endl;
    }



//    std::cout << "constr with params demo: " << std::endl;
//    my_vector<int> par_vec = my_vector(3, 6);
//
//    std::cout << "Number of elements: " << par_vec.get_n() << std::endl;
//    std::cout << "Capacity is: " << par_vec.get_capacity() << std::endl;
//    std::cout << "Real capacity is: "<< par_vec.get_ext() << std::endl;
//
//    for (auto& item: par_vec) {
//        std::cout << item << std::endl;
//    }




    return 0;
}


















