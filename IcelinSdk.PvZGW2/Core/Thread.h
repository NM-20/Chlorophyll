#pragma once

/** @brief Provides the declaration for the `Thread` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

#include <eathread/eathread_thread.h>
#include <FastDelegate/FastDelegate.h>

namespace fb
{

typedef void(*ThreadStartFunc)(void *param);
typedef FastDelegate<void()> ThreadStartDelegate_t;

class WaitableObject {
protected:
  EA::Thread::ThreadId m_handle;
};

class Thread : public WaitableObject {
public:
  virtual ~Thread();

  volatile u32 m_shuttingDown;

  /* Older Frostbite seems to store `ThreadId` twice, one time
     in `WaitableObject` and another time here.
  */
  EA::Thread::ThreadId m_threadId;
  bool m_external;
  char m_name[64];
  ThreadStartFunc m_startFunc;
  void *m_userParam;
  ThreadStartDelegate_t m_startDelegate;
  u32 m_stackSize;
  EA::Thread::Thread m_thread;
};

}
