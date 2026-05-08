#pragma once

/** @brief Provides the declaration for all `StringBuilder`-related types. */

namespace fb
{

template<class Ch>
class StringBuilderBaseImpl {
public:
  typedef Ch value_type;

private:
  Ch *m_buffer;
  Ch *m_pos;
  Ch *m_max;
};

class StringBuilderBase : public StringBuilderBaseImpl<char> {
};

class WideStringBuilderBase : public StringBuilderBaseImpl<wchar_t> {
};

template<int BufferSize>
class StringBuilder : public StringBuilderBase {
private:
  value_type m_buffer[BufferSize];
};

template<int BufferSize>
class WideStringBuilder : public WideStringBuilderBase {
private:
  value_type m_buffer[BufferSize];
};

template<int BufferSize>
class ExtendableStringBuilder : public StringBuilderBase {
private:
  value_type m_buffer[BufferSize];
};

template<int BufferSize>
class ExtendableWideStringBuilder : public WideStringBuilderBase {
private:
  value_type m_buffer[BufferSize];
};

}
