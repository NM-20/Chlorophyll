#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AC08
   RuntimeId:        0EDB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B34
   VfTable:          0000000142263280
   Address (Base):   00000001430ED900
*/
#pragma pack(push, 16)
class PredestructionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0060 */
  FB_BOOLEAN Enabled; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PredestructionEntityData) == 112);

}
