#include <iostream>
  using std::cerr;
  using std::cout;
  using std::endl;
#include <string>
  using std::string;

#define BOOST_TEST_MODULE First_TestSuite
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE( my_test )
{
//    my_class test_object( "qwerty" );

    //BOOST_CHECK( test_object.is_valid() );
}
#include <boost/program_options.hpp>
  namespace po = boost::program_options;
/*
int main(void)
{
    return 0;
}
*/