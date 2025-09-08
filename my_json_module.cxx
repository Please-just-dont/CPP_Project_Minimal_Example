module;


#include "glaze/glaze.hpp"


export module json_module;





template <typename T> // REMOVING TEMPLATE MAKES IT COMPILE
void read_json(const std::string_view str_view)
{

	struct Foo {} foo;
	constexpr glz::opts options{  };

	glz::error_ctx ret_val = glz::read_json(foo, std::string_view(str_view.data(), str_view.size()));

	

} 

