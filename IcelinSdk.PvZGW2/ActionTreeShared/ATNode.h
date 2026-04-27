#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428323B8
   RuntimeId:        0030
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F26
   VfTable:          00000001421E3278
   Address (Base):   00000001430D8170
*/
#pragma pack(push, 8)
class ATNode : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATNode) == 24);

}
