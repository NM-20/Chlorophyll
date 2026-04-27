#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B088
   RuntimeId:        0F15
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F7
   VfTable:          0000000142261878
   Address (Base):   0000000143113830
*/
#pragma pack(push, 8)
class UIPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPartData) == 16);

}
