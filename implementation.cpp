#include <iostream>

#include "exceptions.hpp"
#include "list.hpp"
#include "tree.hpp"

EmptyException::EmptyException() {
  msg = "Exception: this is empty, cannot remove";
}

string EmptyException::what() const {
  return msg;
}

NotFoundException::NotFoundException() {
  msg = "Exception: item not found";
}

string NotFoundException::what() const {
  return msg;
}
