#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C8C0
   RuntimeId:        1072
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F14
   VfTable:          00000001422677B8
   Address (Base):   00000001430DBF30
*/
#pragma pack(push, 8)
class UnlockValuePair : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockValuePair) == 24);

}
