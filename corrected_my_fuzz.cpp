#include <cstdint>

std::size_t find_new_line(const char *str,const std::size_t size)
{
	std::size_t loc = 0;
	while((loc < size) &&
		 (str[loc] != '\n'))
	{
		++loc;
	}
	return loc;
}

extern "C" int LLVMFuzzerTestOneInput(const char *str, const std::size_t size) {
  find_new_line(str,size);
  return 0;
}
