#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/InputConceptIdentifiers.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B168
   RuntimeId:        0F23
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0869
   VfTable:          00000001422612B8
   Address (Base):   00000001430ED5A0
*/
#pragma pack(push, 8)
class InputActionsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING NameSid; /* 0x0010 */
  InputConceptIdentifiers ConceptIdentifier; /* 0x0018 */
  InputConceptIdentifiers CopyKeyBindingFrom; /* 0x001C */
  FB_REFARRAY(class InputActionData) InputActions; /* 0x0020 */
  FB_BOOLEAN HideInKeyBindings; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(InputActionsData) == 48);

}
