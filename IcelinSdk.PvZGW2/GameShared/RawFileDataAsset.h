#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/RawFileAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A458
   RuntimeId:        0E76
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0650
   VfTable:          000000014225F388
   Address (Base):   00000001430FD5D0
*/
#pragma pack(push, 8)
class RawFileDataAsset : public RawFileAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT8) RawData; /* 0x0018 */
  FB_UINT32 Size; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RawFileDataAsset) == 40);

}
