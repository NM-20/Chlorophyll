#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C198
   RuntimeId:        26D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08FD
   VfTable:          0000000142366A20
   Address (Base):   00000001430B47A0
*/
#pragma pack(push, 8)
class BuffEffectData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN UseLocalPower; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffEffectData) == 24);

}
