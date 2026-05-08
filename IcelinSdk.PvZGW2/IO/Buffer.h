#pragma once

/** @brief Provides the declaration for the `Buffer` class and all related types. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/Utilities/Noncopyable.h>
#include <IcelinSdk.PvZGW2/Utilities/StringBuilder.h>

namespace fb
{

typedef int IoError;

class Buffer : Noncopyable {
protected:
  const int m_caps;
  StreamSize m_bufferSize;
  void *m_nativeHandle;

public:
  virtual ~Buffer() = 0;

  virtual IoError readEx(void *destination, StreamSize byteCount) = 0;

  virtual StreamSize getAvailableBytes() = 0;
  virtual void skip(StreamSize byteCount) = 0;

  virtual IoError writeEx(const void *source, StreamSize count) = 0;
  
  virtual void setPosition(StreamSize position) = 0;
  virtual StreamSize getPosition() const = 0;

  virtual void flush() = 0;

  virtual const char *getIdentifier()     const = 0;
  virtual void setIdentifier(const char *ident) = 0;

  /* Newer Fb changes this to return an int, but this doesn't seem to be in 2014. */
  virtual void *getNativeHandle() const = 0;
};

class BufferImpl : public Buffer {
protected:
  ExtendableStringBuilder<192> m_ident;
};

}