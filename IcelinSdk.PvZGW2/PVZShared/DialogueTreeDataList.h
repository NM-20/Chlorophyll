#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428617E8
   RuntimeId:        1FA5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E02
   VfTable:          0000000142344340
   Address (Base):   00000001430BCF10
*/
#pragma pack(push, 8)
class DialogueTreeDataList : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DialogueTreeData) DialogueTree; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DialogueTreeDataList) == 24);

}
