#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BC90
   RuntimeId:        0FC6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06EA
   VfTable:          0000000142268110
   Address (Base):   0000000143112ED0
*/
#pragma pack(push, 8)
class MovementActionRoot : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MovementActionData) StartSequence; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MovementActionRoot) == 32);

}
