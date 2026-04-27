#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836770
   RuntimeId:        03F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0602
   VfTable:          00000001421F4AC8
   Address (Base):   0000000143118990
*/
#pragma pack(push, 8)
class SoundTestTaskParam : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundTestTaskParam) == 16);

}
