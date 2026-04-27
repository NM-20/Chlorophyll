#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E7A8
   RuntimeId:        120F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9E
   VfTable:          0000000142272EB0
   Address (Base):   00000001430EC640
*/
#pragma pack(push, 16)
class WaterDepthComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 UpdateRate; /* 0x0070 */
  FB_BOOLEAN AutoStart; /* 0x0074 */
  FB_BOOLEAN ResetOnStop; /* 0x0075 */
  FB_BOOLEAN Enabled; /* 0x0076 */
  char pad_0077[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(WaterDepthComponentData) == 128);

}
