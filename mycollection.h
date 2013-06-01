//Tyler Morgan
//uw online cpp class second qtr
//assignment 3 part 2
//mycollection.h

#include <vector>
#include <iostream>

template<class T>
class MyCollection
{
public:
  void add(const T& element)
  {
    my_collection.push_back(element);
    return;
  }

  int count()
  {
    return my_collection.size();
  }

  bool is_empty()
  {
    if(my_collection.size()==0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  const T& get(int index)
  {
    return my_collection.at(index);
  }

  void print_all(std::ostream& os)
  {
    for(int x = 0; x < my_collection.size(); x++)
    {
      os << my_collection.at(x) << std::endl;
    }
  }

  void print_all_reverse(std::ostream& os)
  {
    for(int x = my_collection.size()-1; x >= 0; x--)
    {
      os << my_collection.at(x) << std::endl;
    }
  }
private:
  std::vector<T> my_collection;
};