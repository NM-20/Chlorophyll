#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceComponentBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BBD8
   RuntimeId:        0936
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D51
   VfTable:          0000000142212580
   Address (Base):   00000001430EF1C0
*/
#pragma pack(push, 16)
class LocalWindForceSphereComponentData : public LocalWindForceComponentBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0090 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceSphereComponentData) == 160);

}
