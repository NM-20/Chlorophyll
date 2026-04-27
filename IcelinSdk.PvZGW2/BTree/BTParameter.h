#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834158
   RuntimeId:        019D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF0
   VfTable:          00000001421EB748
   Address (Base):   00000001430DCE90
*/
#pragma pack(push, 8)
class BTParameter : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Name; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BTParameter) == 24);

}
