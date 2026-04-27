#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AbstractPersistentStatRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849EB8
   RuntimeId:        0E22
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E77
   VfTable:          000000014225F650
   Address (Base):   0000000143114250
*/
#pragma pack(push, 8)
class PersistentValueTemplateStatRef : public AbstractPersistentStatRef
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PersistentValueTemplate) Definition; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PersistentValueTemplateStatRef) == 24);

}
