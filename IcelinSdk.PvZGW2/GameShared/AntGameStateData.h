#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D2C0
   RuntimeId:        10F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F59
   VfTable:          0000000142274408
   Address (Base):   00000001430ECC40
*/
#pragma pack(push, 8)
class AntGameStateData : public DataContainer
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

static_assert(sizeof(AntGameStateData) == 24);

}
