#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/InputConceptIdentifiers.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B298
   RuntimeId:        0F33
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC3
   VfTable:          0000000142261020
   Address (Base):   00000001430ED960
*/
#pragma pack(push, 8)
class EditableAction : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputConceptIdentifiers Concept; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EditableAction) == 24);

}
