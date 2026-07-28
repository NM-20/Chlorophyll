#pragma once

/** @brief Provides the declaration for the `FsBackend` class. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/Core/RefCountBase.h>
#include <IcelinSdk.PvZGW2/IO/Buffer.h>
#include <IcelinSdk.PvZGW2/IO/FileInfo.h>
#include <IcelinSdk.PvZGW2/IO/FileIterator.h>
#include <IcelinSdk.PvZGW2/IO/PathName.h>
#include <IcelinSdk.PvZGW2/Utilities/Noncopyable.h>
#include <IcelinSdk.PvZGW2/Utilities/StringBuilder.h>

namespace fb
{

class FsBackend : public RefCountBase, Noncopyable {
private:
  const unsigned m_flags;
  ExtendableStringBuilder<64> m_basePrefix;
  const char *m_tag;

protected:
  ~FsBackend();

public:
  virtual bool deleteFile(const PathName &fileName) = 0;
  virtual bool moveFile(const PathName &from, const PathName &to);
  virtual bool getFileInfo(const PathName &fileName, FileInfo &outInfo) = 0;
  virtual bool setFileInfo(const PathName &fileName, const FileInfo &info, u32 mask) = 0;
  virtual FileIterator *getFileIterator(const PathName &directory) = 0;
  virtual void nativePathTranslationHook(const PathName &path, StringBuilderBase *base);
  virtual bool createDirectory(const PathName &path) = 0;
  virtual void update();
  virtual bool copyFile(const PathName &sourceFile, const PathName &destFile, bool failIfExists);
  virtual bool getFastLookupFileSize(const PathName &path, StreamSize &size);
  virtual Buffer *internalCreateBuffer(unsigned bufferFlags, const PathName &name) = 0;
};

}
