#ifndef PYTHONIC_INCLUDE_BUILTIN_FILE_TRUNCATE_HPP
#define PYTHONIC_INCLUDE_BUILTIN_FILE_TRUNCATE_HPP

#include "pythonic/include/types/file.hpp"
#include "pythonic/include/utils/proxy.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace file
    {

      void truncate(types::file &f);
      void truncate(types::file &&f);
      void truncate(types::file &f, long size);
      void truncate(types::file &&f, long size);

      PROXY_DECL(pythonic::__builtin__::file, truncate);
    }
  }
}
#endif
