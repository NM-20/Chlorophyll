#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872148
   RuntimeId:        2B13
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E73
   VfTable:          000000014236BB98
   Address (Base):   0000000143104E90
*/
#pragma pack(push, 8)
class UIAiDescription : public UIItemDescription
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

static_assert(sizeof(UIAiDescription) == 56);

}
