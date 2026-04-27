#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874B38
   RuntimeId:        2C83
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F6D
   VfTable:          000000014238CD00
   Address (Base):   0000000143103E10
*/
#pragma pack(push, 8)
class SpecialTypeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN OwnsValue; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SpecialTypeData) == 24);

}
