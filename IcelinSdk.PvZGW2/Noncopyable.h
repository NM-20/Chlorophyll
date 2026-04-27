#pragma once

/** @brief Provides the declaration for the `Noncopyable` class. */

namespace fb
{

class Noncopyable {
public:
  Noncopyable(const Noncopyable &)            = delete;
  Noncopyable &operator=(const Noncopyable &) = delete;
};

}