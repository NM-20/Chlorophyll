#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/MovementActionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BCB0
   RuntimeId:        0FC8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E60
   VfTable:          0000000142268100
   Address (Base):   0000000143112E70
*/
#pragma pack(push, 8)
class MovementActionGroupData : public MovementActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MovementActionData) Actions; /* 0x0010 */
  FB_BOOLEAN RunSimultaneously; /* 0x0018 */
  FB_BOOLEAN RestartChildren; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MovementActionGroupData) == 32);

}
