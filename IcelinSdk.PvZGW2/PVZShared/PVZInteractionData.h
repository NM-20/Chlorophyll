#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863A08
   RuntimeId:        213D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FC
   VfTable:          0000000142353458
   Address (Base):   00000001430DA8B0
*/
#pragma pack(push, 8)
class PVZInteractionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DistanceToInteract; /* 0x0010 */
  FB_FLOAT32 MaxLookAtAngle; /* 0x0014 */
  FB_INT32 InteractInputAction; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_INT32) RestrictedActions; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZInteractionData) == 40);

}
