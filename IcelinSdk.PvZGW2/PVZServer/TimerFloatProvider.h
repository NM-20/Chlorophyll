#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F618
   RuntimeId:        1DA5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10CF
   VfTable:          000000014231D9B8
   Address (Base):   000000014310A6B0
*/
#pragma pack(push, 8)
class TimerFloatProvider : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TimerType; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class EntityProvider) Target; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TimerFloatProvider) == 32);

}
