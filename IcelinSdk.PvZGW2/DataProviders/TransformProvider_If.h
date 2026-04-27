#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428352A0
   RuntimeId:        02B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1096
   VfTable:          00000001421EC520
   Address (Base):   0000000143119FB0
*/
#pragma pack(push, 8)
class TransformProvider_If : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) IfTrue; /* 0x0010 */
  FB_HANDLE(class TransformProvider) IfFalse; /* 0x0018 */
  FB_HANDLE(class BoolProvider) Condition; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_If) == 40);

}
