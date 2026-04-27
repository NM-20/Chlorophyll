#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C170
   RuntimeId:        1012
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A1
   VfTable:          0000000142267B50
   Address (Base):   00000001430DBFF0
*/
#pragma pack(push, 8)
class UIWidgetBlueprint : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIWidgetBlueprint) == 72);

}
