#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872108
   RuntimeId:        2B0F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6D
   VfTable:          000000014236BBB8
   Address (Base):   0000000143104F50
*/
#pragma pack(push, 8)
class UIGenericItemDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0028 */
  FB_CSTRING ImagePath; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIGenericItemDescription) == 56);

}
