#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854F20
   RuntimeId:        17EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065E
   VfTable:          00000001422B83B8
   Address (Base):   00000001430FB410
*/
#pragma pack(push, 8)
class UITextDatabase : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LanguageFormat Language; /* 0x0018 */
  FB_GUID BinaryChunk; /* 0x001C */
  FB_UINT32 BinaryChunkSize; /* 0x002C */
  FB_GUID HistogramChunk; /* 0x0030 */
  FB_UINT32 HistogramChunkSize; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UITextDatabase) == 72);

}
