#pragma once

/** @brief Provides the declaration for the `PrimitiveTypeInfo` class. */

#include <IcelinSdk.PvZGW2/StringConvertParams.h>
#include <IcelinSdk.PvZGW2/CopyContext.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/SHA1.h>
#include <IcelinSdk.PvZGW2/StringBuilderBase.h>
#include <IcelinSdk.PvZGW2/IObjectStream.h>
#include <IcelinSdk.PvZGW2/Core/ResourceRef.h>
#include <IcelinSdk.PvZGW2/Core/String.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Skeleton.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

#include <EASTL/string.h>

namespace fb
{

class PrimitiveTypeInfo : public TypeInfo {
public:
  struct PrimitiveTypeInfoData {
    TypeInfo::TypeInfoData tid;
    const void            *defaultValue;
  };

  /* `PrimitiveTypeInfo` is unique in that compared to other `TypeInfo`s,
     it defines virtual functions.
  */
  virtual void write(IObjectOutputStream *streamPtr, const void *data,
    u32 count) const;

  virtual void read(IObjectInputStream *streamPtr, void *data,
    u32 count) const;

  virtual void toString(StringBuilderBase &outString, const void *data,
    const StringConvertParams *parm) const;

  virtual SkeletonNode *toSkel(const void *data,
     const StringConvertParams * parm, SkelConversionContext *context)
     const;

  virtual bool parseSkel(void *target, const SkeletonNode *sourceNode,
    const StringConvertParams *parm, SkelConversionContext *context)
    const;

  virtual bool parse(
    void *ptr, const char *str, const StringConvertParams *parm) const;

  virtual void copy(void *target, const void *src, CopyContext &ctx)
    const;

  virtual int doCompare(const void *lhs,
     const void *rhs, CompareParams *parm, CompareState *state) const;
};

/* To override the virtual functions within PrimitiveTypeInfo`, Frostbite
   uses a macro on each primitive. We will do the same, although not with
   the same implementation.
*/
#define FB_DECLARE_PRIMITIVE_TYPE_INFO(IN_ALIAS_NAME, IN_NATIVE_TYPE) \
  class IN_ALIAS_NAME##TypeInfo : public PrimitiveTypeInfo { \
  public:                                                    \
  };

/* Now, we'll need to call the macro for each primitive. This should hold
   each primitive defined within `TypeCode`.
*/
FB_DECLARE_PRIMITIVE_TYPE_INFO(ResourceRef, ResourceRef);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Boolean,     bool);
FB_DECLARE_PRIMITIVE_TYPE_INFO(CString,     String);
FB_DECLARE_PRIMITIVE_TYPE_INFO(FileRef,     FileRef);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Float32,     float);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Float64,     double);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Guid,        Guid);
FB_DECLARE_PRIMITIVE_TYPE_INFO(SHA1,        SHA1);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Int16,       s16);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Int8,        s8);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Int32,       s32);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Int64,       s64);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Uint16,      u16);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Uint8,       u8);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Uint32,      u32);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Uint64,      u64);
FB_DECLARE_PRIMITIVE_TYPE_INFO(Void,        void);
FB_DECLARE_PRIMITIVE_TYPE_INFO(DbObject,    DbObject);
FB_DECLARE_PRIMITIVE_TYPE_INFO(String,      eastl::string);

/* After we have added each primitive, this implementation is essentially
   finished (at least with our current needs).
*/

}
