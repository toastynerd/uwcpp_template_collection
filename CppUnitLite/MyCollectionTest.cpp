#include "TestHarness.h"
#include "../mycollection.h"
#include <string>
#include <sstream>

TEST(collection_test, MyCollection)
{
  std::stringstream ss;
  MyCollection<std::string> my_collection;
  CHECK_EQUAL(true, my_collection.is_empty());
  my_collection.add("hello");
  my_collection.add("world");
  CHECK_EQUAL(false, my_collection.is_empty());
  CHECK_EQUAL("hello", my_collection.get(0));
  my_collection.print_all(ss);
  CHECK_EQUAL("hello\nworld\n", ss.str());
  ss.clear();
  ss.str("");
  my_collection.print_all_reverse(ss);
  CHECK_EQUAL("world\nhello\n", ss.str());


}