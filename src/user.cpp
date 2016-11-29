#include "user.h"
#include <json.hpp>
#include "codes.h"
#include "client.h"

namespace twitter {
  
  user::user(std::string data) try
    : _valid(true)
  {
    auto json = nlohmann::json::parse(data);
    _id = json["id"].get<user_id>();
    _screen_name = json["screen_name"].get<std::string>();
    _name = json["name"].get<std::string>();
  } catch (const std::invalid_argument& error)
  {
    std::throw_with_nested(malformed_object("user", data));
  } catch (const std::domain_error& error)
  {
    std::throw_with_nested(malformed_object("user", data));
  }

};
