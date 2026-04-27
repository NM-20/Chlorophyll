#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/MovementActionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BCD0
   RuntimeId:        0FCA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5F
   VfTable:          0000000142268120
   Address (Base):   0000000143112E10
*/
#pragma pack(push, 8)
class MovementActionRandomizerData : public MovementActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MovementActionData) Actions; /* 0x0010 */
  FB_BOOLEAN ReinsertIntoRandomizedListAfterUse; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MovementActionRandomizerData) == 32);

}
