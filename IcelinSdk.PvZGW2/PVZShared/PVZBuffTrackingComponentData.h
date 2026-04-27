#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863EA8
   RuntimeId:        2187
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D39
   VfTable:          0000000142352F28
   Address (Base):   00000001430D52F0
*/
#pragma pack(push, 16)
class PVZBuffTrackingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0070 */
  FB_HANDLE(class BuffTypeData) BuffType; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZBuffTrackingComponentData) == 128);

}
