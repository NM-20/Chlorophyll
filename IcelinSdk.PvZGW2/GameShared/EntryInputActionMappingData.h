#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionMappingData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputConceptIdentifiers.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B4E0
   RuntimeId:        0F55
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061B
   VfTable:          0000000142260848
   Address (Base):   0000000143113470
*/
#pragma pack(push, 8)
class EntryInputActionMappingData : public InputActionMappingData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ActionIdentifier; /* 0x0010 */
  InputConceptIdentifiers ConceptIdentifier; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntryInputActionMappingData) == 24);

}
