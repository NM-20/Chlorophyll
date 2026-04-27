#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/PID.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A658
   RuntimeId:        0E94
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          113F
   VfTable:          00000001422665B0
   Address (Base):   0000000143113CB0
*/
#pragma pack(push, 8)
class RegulatedSteering : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PID PID; /* 0x0010 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RegulatedSteering) == 48);

}
