#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839F98
   RuntimeId:        0734
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1112
   VfTable:          00000001421FF3E8
   Address (Base):   00000001431157B0
*/
#pragma pack(push, 8)
class EmitterTag : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EmitterTag) == 24);

}
