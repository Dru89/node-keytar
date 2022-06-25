#ifndef SRC_CREDENTIALS_H_
#define SRC_CREDENTIALS_H_

#include <string>
#include <utility>

namespace keytar {

typedef std::tuple<std::string, uint8_t*, int32_t> Credentials;

}

#endif  // SRC_CREDENTIALS_H_
