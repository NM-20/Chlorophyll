#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E908
   RuntimeId:        1225
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062C
   VfTable:          0000000142272D80
   Address (Base):   0000000143111490
*/
#pragma pack(push, 16)
class ColorReference : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec4 Color; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ColorReference) == 48);

}
