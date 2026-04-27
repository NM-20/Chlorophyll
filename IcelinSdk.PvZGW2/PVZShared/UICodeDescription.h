#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872168
   RuntimeId:        2B15
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E71
   VfTable:          000000014236BB88
   Address (Base):   0000000143104E30
*/
#pragma pack(push, 8)
class UICodeDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UICodeDescription) == 48);

}
