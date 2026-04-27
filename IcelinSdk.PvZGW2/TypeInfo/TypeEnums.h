#pragma once

/** @brief Provides the declaration for the `TypeCategory` and `TypeCode` enumerations. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

enum TypeCode {
  kTypeCode_Void           = 0,
  kTypeCode_DbObject       = 1,
  kTypeCode_ValueType      = 2,
  kTypeCode_Class          = 3,
  kTypeCode_Array          = 4,
  kTypeCode_FixedArray     = 5,
  kTypeCode_String         = 6,
  kTypeCode_CString        = 7,
  kTypeCode_Enum           = 8,
  kTypeCode_FileRef        = 9,
  kTypeCode_Boolean        = 10,
  kTypeCode_Int8           = 11,
  kTypeCode_Uint8          = 12,
  kTypeCode_Int16          = 13,
  kTypeCode_Uint16         = 14,
  kTypeCode_Int32          = 15,
  kTypeCode_Uint32         = 16,
  kTypeCode_Int64          = 17,
  kTypeCode_Uint64         = 18,
  kTypeCode_Float32        = 19,
  kTypeCode_Float64        = 20,
  kTypeCode_Guid           = 21,
  kTypeCode_SHA1           = 22,
  kTypeCode_ResourceRef    = 23,
  kTypeCode_BasicTypeCount = 24,
};

enum TypeCategory : u16 {
  kTypeCategory_NotApplicable = 0,
  kTypeCategory_Class         = 1,
  kTypeCategory_ValueType     = 2,
  kTypeCategory_PrimitiveType = 3,
  kTypeCategory_CategoryCount = 4,
};

}
