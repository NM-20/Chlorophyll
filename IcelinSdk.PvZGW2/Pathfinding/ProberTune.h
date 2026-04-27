#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428506B8
   RuntimeId:        13A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A2
   VfTable:          000000014227C7D0
   Address (Base):   00000001430FC5B0
*/
#pragma pack(push, 8)
class ProberTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 probeInterval; /* 0x0018 */
  FB_BOOLEAN probeForGround; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ProberTune) == 32);

}
