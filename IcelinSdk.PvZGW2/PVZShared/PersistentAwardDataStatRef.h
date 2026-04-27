#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AbstractPersistentStatRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428688B0
   RuntimeId:        23FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E78
   VfTable:          000000014234E940
   Address (Base):   0000000143107D70
*/
#pragma pack(push, 8)
class PersistentAwardDataStatRef : public AbstractPersistentStatRef
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AwardData) Definition; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PersistentAwardDataStatRef) == 24);

}
