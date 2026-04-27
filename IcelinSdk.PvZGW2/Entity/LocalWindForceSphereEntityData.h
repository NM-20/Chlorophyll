#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntityBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BBB8
   RuntimeId:        0934
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFE
   VfTable:          0000000142212548
   Address (Base):   00000001430EEC20
*/
#pragma pack(push, 16)
class LocalWindForceSphereEntityData : public LocalWindForceEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0080 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceSphereEntityData) == 144);

}
