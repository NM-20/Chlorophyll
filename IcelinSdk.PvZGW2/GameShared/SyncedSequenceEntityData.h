#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SequenceEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BA30
   RuntimeId:        0FA0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A17
   VfTable:          0000000142268518
   Address (Base):   00000001430CE810
*/
#pragma pack(push, 8)
class SyncedSequenceEntityData : public SequenceEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN InterpolateTime; /* 0x0058 */
  char pad_0059[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(SyncedSequenceEntityData) == 96);

}
