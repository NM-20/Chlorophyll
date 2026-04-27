#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837C70
   RuntimeId:        053C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F5
   VfTable:          00000001421F9B88
   Address (Base):   00000001430F2940
*/
#pragma pack(push, 8)
class MusicInputData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MusicInputData) == 32);

}
