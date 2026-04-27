#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428626F8
   RuntimeId:        207A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          127A
   VfTable:          0000000142343AB8
   Address (Base):   00000001430F8890
*/
#pragma pack(push, 8)
class PVZGameStateData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 PropertyHash; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZGameStateData) == 24);

}
