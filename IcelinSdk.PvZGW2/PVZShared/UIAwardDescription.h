#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871F18
   RuntimeId:        2AF1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6A
   VfTable:          000000014236BEF8
   Address (Base):   0000000143105130
*/
#pragma pack(push, 8)
class UIAwardDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIAwardDescription) == 40);

}
