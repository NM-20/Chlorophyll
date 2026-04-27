#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872128
   RuntimeId:        2B11
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E68
   VfTable:          000000014236BBC8
   Address (Base):   0000000143104EF0
*/
#pragma pack(push, 8)
class UICustomizationDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING NamePlural; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UICustomizationDescription) == 56);

}
